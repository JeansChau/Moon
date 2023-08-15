cmake_minimum_required(VERSION 3.20)

#Project information
project(Moon VERSION "1.0" 
		DESCRIPTION "Moon FRAMEWORK" 
		LANGUAGES "C" "CXX" "CUDA")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_subdirectory("Source")
