cmake_minimum_required(VERSION 3.29)
project(projet_algo_3 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(projet_algo_3
    loc.c
    loc.h
    main.c
    map.c
    map.h
    moves.c
    moves.h
    queue.c
    queue.h
    stack.c
    stack.h)
