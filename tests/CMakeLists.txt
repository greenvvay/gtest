project(note_test CXX)

enable_testing()
add_executable(note_test test_note.cpp)
target_link_libraries(note_test gtest gtest_main)

add_test(NAME note_test COMMAND note_test --gtest_color=1)
add_test(NAME note_test2 COMMAND note_test --gtest_color=1)

add_custom_target(tests ALL
    COMMAND ${CMAKE_COMMAND} -E echo "Running tests..."
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure
    DEPENDS note_test
)