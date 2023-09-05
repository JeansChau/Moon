source_group(Source FILES main.cpp)

add_executable(Moon)
target_sources(Moon PRIVATE main.cpp "Ray.cpp"  "Util/Math.cpp" "Util/Math.h")


