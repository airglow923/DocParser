set(TEST_FILES
    test.cc)

add_executable(DocParserTest "")

target_sources(DocParserTest PRIVATE ${TEST_FILES})

target_link_libraries(DocParserTest
    PRIVATE ${PROJECT_NAME}
    PRIVATE gtest_main)

add_test(NAME UnitTest COMMAND DocParserTest)
