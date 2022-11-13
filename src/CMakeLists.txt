set(LIB_HEADERS)

set(LIB_SOURCES
    mylib.c)

configure_file(mylib.h.in  ${PROJECT_SOURCE_DIR}/include/${LIB_NAME}/mylib.h ESCAPE_QUOTES)

add_library(${LIB_NAME} STATIC ${LIB_SOURCES} ${LIB_HEADERS})

target_include_directories(${LIB_NAME} 
    PRIVATE ./
    PUBLIC ${PROJECT_SOURCE_DIR}/include)


