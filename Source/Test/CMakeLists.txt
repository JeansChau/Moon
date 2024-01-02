# Source code
set(SOURCE_CODE Ray.h Ray.cpp Moon.h )
add_executable(Test)
target_sources(Test PRIVATE main.cpp ${SOURCE_CODE})
set_target_properties(Test PROPERTIES FOLDER Test)
target_link_libraries(Test PUBLIC luisa::compute)


