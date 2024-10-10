cmake_minimum_required(VERSION 3.29)

project(moderncpp)

set(CMAKE_CXX_STANDARD 23)

# Set the output directory for executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Collect all .cpp files in the src directory
file(GLOB SOURCES "*.cpp")

# Find the fmt and Boost packages with required components
find_package(fmt CONFIG REQUIRED)
find_package(Boost 1.83.0 REQUIRED COMPONENTS system)

# Add compile options
add_compile_options("-Wall" "-Wextra" "-Wpedantic" "-Werror" "-Wno-unused-variable" "-Wno-unused-parameter" "-Wno-unused-function" "-Wno-unused-but-set-variable" "-Wno-unused-private-field" "-Wno-unused-local-typedefs")

# Loop through each .cpp file and create an executable target
foreach (SOURCE_FILE ${SOURCES})
    get_filename_component(EXE_NAME ${SOURCE_FILE} NAME_WE)

    add_executable(${EXE_NAME} ${SOURCE_FILE})

    # Link fmt and Boost libraries
    target_link_libraries(${EXE_NAME} PRIVATE fmt::fmt Boost::system)

    # Include directories for Boost Beast and Asio
    target_include_directories(${EXE_NAME} PRIVATE ${Boost_INCLUDE_DIRS})
endforeach ()