cmake_minimum_required(VERSION 3.17)
project(c_train C)

set(CMAKE_C_STANDARD 99)

add_executable(c_train main.c main.h base_use.c str2hex_convert.c union_struct_use.c func_point.c multicast_config.c lexin_goldbach.c recursion_use.c)