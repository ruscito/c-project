if (ENABLE_TESTING)
    message("Building unity tests")    
    set(TEST_NAME libtest)
    set(TEST_SOURCES 
        main.c)

    add_executable(${TEST_NAME} ${TEST_SOURCES})
    
    target_link_libraries(${TEST_NAME} PRIVATE ${LIB_NAME})
    target_link_libraries(${TEST_NAME} PRIVATE unity)

    if (ENABLE_COVERAGE)
        set(COVERAGE_MAIN "coverage")
        set(COVERAGE_EXCLUDES
            "${PROJECT_SOURCE_DIR}/app/*"
            "${PROJECT_SOURCE_DIR}/cmake/*"
            "${PROJECT_SOURCE_DIR}/docs/*"
            "${PROJECT_SOURCE_DIR}/extern/*"
            "${PROJECT_SOURCE_DIR}/tests/*"
            "${PROJECT_SOURCE_DIR}/build/*"
            "/Library/*"
            "/usr/include/*")
        setup_target_for_coverage_lcov(
            NAME ${COVERAGE_MAIN}
            EXECUTABLE ${TEST_NAME}
            DEPENDENCIES ${TEST_NAME}
        )
    endif()

else()
    message("Unity test build disabled")    
endif()