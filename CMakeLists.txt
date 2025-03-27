cmake_minimum_required(VERSION 3.10)

project(cicd VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(3thrdpaty)
add_subdirectory(tests)

file(
    GLOB_RECURSE CIDI_SRC
    RELATIVE "${CMAKE_CURRENT_LIST_DIR}"
    CONFIGURE_DEPENDS "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp"
    "${CMAKE_CURRENT_LIST_DIR}/src/**/*.cpp"
)

add_executable(cicd ${CIDI_SRC})


