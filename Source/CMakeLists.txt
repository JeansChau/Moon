# Source code
set(SOURCE_CODE 
		Ray.h Ray.cpp
		Moon.h
)
# Util code
set(UTIL_CODE
	Util/Math.h Util/Math.cpp
)

# Executable target
add_executable(Moon)
target_sources(Moon PRIVATE main.cpp ${SOURCE_CODE}  ${UTIL_CODE})


