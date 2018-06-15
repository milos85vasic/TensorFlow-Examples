find_package(TensorflowCC REQUIRED)
add_executable(example example.cpp)

# target_link_libraries(example TensorflowCC::Static)

target_link_libraries(example TensorflowCC::Shared)

# For shared library setting, you may also link cuda if it is available.
# find_package(CUDA)
# if(CUDA_FOUND)
#   target_link_libraries(example ${CUDA_LIBRARIES})
# endif()
