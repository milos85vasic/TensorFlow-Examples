cmake_minimum_required(VERSION 3.1)

project(Hello_TensorFlow LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Quick REQUIRED)
find_package(TensorflowCC REQUIRED)

add_executable(${PROJECT_NAME} "main.cpp" "qml.qrc")

# target_link_libraries(example TensorflowCC::Static)
target_link_libraries(${PROJECT_NAME} TensorflowCC::Shared)
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Quick)

set(SOURCES
    main.cpp
    tensorclient.cpp
)

include_directories(.)


# - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
# For shared library setting, you may also link cuda if it is available.
# find_package(CUDA)
# if(CUDA_FOUND)
#   target_link_libraries(example ${CUDA_LIBRARIES})
# endif()
