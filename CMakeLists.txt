cmake_minimum_required(VERSION 3.20)

#Project information
project(Moon VERSION "1.0" 
		DESCRIPTION "Moon FrameWork" 
		LANGUAGES "C" "CXX")

set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(INSERT CMAKE_MODULE_PATH 0 "${CMAKE_SOURCE_DIR}/cmake")
add_subdirectory("Source")

option(FLOAT_AS_DOUBLE "Use 64-bit flots" OFF)
