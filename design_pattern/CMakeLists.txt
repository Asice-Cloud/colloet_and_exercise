cmake_minimum_required(VERSION 3.28)

project(dp)

set(CMAKE_CXX_STANDARD 23)

# Set the output directory for executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Collect all .cpp files in the cp, sp, and bp directories
file(GLOB CREATIONAL "cp/*.cpp")
file(GLOB STRUCT "sp/*.cpp")
file(GLOB BEHAVIOR "bp/*.cpp")
find_package(fmt REQUIRED)
# Combine all collected files into a single list
list(APPEND ALL_SOURCES ${CREATIONAL} ${STRUCT} ${BEHAVIOR})

# Loop through each .cpp file and create an executable target
foreach(SOURCE_FILE ${ALL_SOURCES})
    get_filename_component(EXE_NAME ${SOURCE_FILE} NAME_WE)
    add_executable(${EXE_NAME} ${SOURCE_FILE})
    target_link_libraries(${EXE_NAME} PRIVATE fmt::fmt)
endforeach()