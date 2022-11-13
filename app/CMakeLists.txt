set(APP_SOURCES 
    main.c)

add_executable(${APP_NAME} ${APP_SOURCES})

target_link_libraries(${APP_NAME} PUBLIC  ${LIB_NAME})