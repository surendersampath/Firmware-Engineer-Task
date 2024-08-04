add_executable(unit_test_app
    unit_test.cpp
)

target_link_libraries(unit_test_app
    utility
    Unity
)

add_test(suite_1_test suite_1_app)
