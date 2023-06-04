cmake_minimum_required(VERSION 3.5)
set(CMAKE_C_COMPILER "gcc-10")
set(CMAKE_CXX_COMPILER "/usr/bin/g++-10")
project(HelloApp
        VERSION 0.0.1
	    LANGUAGES CXX)
add_executable(HelloApp main.cpp)
target_compile_features(HelloApp PRIVATE cxx_std_20)
