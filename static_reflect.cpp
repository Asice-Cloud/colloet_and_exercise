#include<jsoncpp/json/json.h>
#include<iostream>
#include"static_reflect.h"

//user code below:
struct Admin
{
	std::string name;
	int code;
	int sex;
};

REFLECT_EXTERNAL(Admin, name, code, sex);

struct Advent
{
	std::string symbol;
	int stage;
	REFLECT_INTERNAL(symbol,stage)
};

int main()
{
	Admin admin = {
		.name = "asice",
		.code = 42,
		.sex = 2,
	};
	std::cout << serilize(admin) << std::endl;

	Advent advent = {
		.symbol = "crimson",
		.stage = 6,
	};
	std::cout << serilize(advent) << std::endl;
}
