# Compute framework
add_subdirectory(Compute)
set_target_properties(luisa-compute-include PROPERTIES FOLDER "Compute")

# Test cases
add_subdirectory(Test)
