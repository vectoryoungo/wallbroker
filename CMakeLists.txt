cmake_minimum_required(VERSION 3.10)
project(wallbroker)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Sales_item.cpp Sales_item.h Sales_data.cpp Sales_data.h Screen.h Screen.h Window_mgr.cpp Window_mgr.h ConstRef.cpp ConstRef.h)

add_executable(wallbroker ${SOURCE_FILES} Sales_data.cpp Sales_data.h Window_mgr.cpp Window_mgr.h ConstRef.cpp ConstRef.h)