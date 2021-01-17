set(TEST_FILES
    main.c)

add_executable(DocParserTest "")

target_sources(DocParserTest PRIVATE ${TEST_FILES})

target_link_libraries(DocParserTest PRIVATE ${PROJECT_NAME})

set_target_properties(DocParserTest PROPERTIES LINKER_LANGUAGE C)

add_test(
    NAME
        CTestBuild
    COMMAND
        "${CMAKE_COMMAND}" --build ${CMAKE_BINARY_DIR} --target DocParserTest)

add_test(NAME CTestRun COMMAND DocParserTest)

set_tests_properties(CTestRun PROPERTIES DEPENDS CTestBuild)

add_custom_target(check COMMAND ${CMAKE_CTEST_COMMAND} DEPENDS DocParserTest)
