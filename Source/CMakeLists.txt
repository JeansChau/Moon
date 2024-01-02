add_subdirectory(Compute)

add_library(moon-include INTERFACE)
target_compile_features(moon-include INTERFACE c_std_11 cxx_std_20)

# target_include_directories(moon-include INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/Compute/include)
# target_include_directories(moon-include INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(Test)

