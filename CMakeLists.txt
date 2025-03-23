cmake_minimum_required(VERSION 3.30)
project(Sorting_Algorithms C)

set(CMAKE_C_STANDARD 11)

add_executable(Sorting_Algorithms main.c
        sort.c
        sort.h
        sort_utils.c
        sort_utils.h)
