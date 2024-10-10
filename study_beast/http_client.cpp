//
// Created by asice-cloud on 24-9-13.
//

#include<iostream>
#include<cstdlib>
#include<boost/beast/core.hpp>
#include<boost/beast/http.hpp>
#include<boost/beast/version.hpp>
#include<boost/asio/connect.hpp>
#include<boost/asio/ip/tcp.hpp>
#include<string>

namespace beast = boost::beast;
namespace http = beast::http;
namespace net = boost::asio;
using tcp = boost::asio::ip::tcp;

int main()
{
	try
	{
		auto const host = "127.0.0.1";
		auto const port = "8088";
		auto target = "/";
		int version = 11;

		//The io_context is required for all I/O
		net::io_context ioc;

		//These objects perform our I/O
		tcp::resolver resolver(ioc);
		beast::tcp_stream stream(ioc);

		//lock up the domain name
		auto const results = resolver.resolve(host, port);

		//Make the connection on the IP address we get from a lookup
		stream.connect(results);

		//set up an HTTP GET request message
		http::request<http::string_body> req(http::verb::get, target, version);
		//set the host
		req.set(http::field::host, host);
		//Set the user-agent field
		req.set(http::field::user_agent,BOOST_BEAST_VERSION_STRING);

		//Send the HTTP request to the remote host
		http::write(stream, req);

		//This buffer is used for reading and must be persisted
		beast::flat_buffer buffer;

		//Declare a container to hold the response
		http::response<http::dynamic_body> res;

		//Receive the HTTP response
		http::read(stream, buffer, res);

		//Write the message to standard out
		std::cout << res << '\n';

		//Gracefully close the socket
		beast::error_code ec;
		stream.socket().shutdown(tcp::socket::shutdown_both, ec);

		if (ec && ec != beast::errc::not_connected)
			throw beast::system_error{ec};
	}
	catch (std::exception const& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
