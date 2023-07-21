cmake_minimum_required(VERSION 3.24)
project(qemu_input)

set(CMAKE_CXX_STANDARD 23)

add_executable(qemu_input main.cc qemu_input.cc qemu_input.hh)
