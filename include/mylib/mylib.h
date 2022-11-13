#pragma once

#define MYLIB_VERSION_MAJOR 0
#define MYLIB_VERSION_MINOR 0
#define MYLIB_VERSION_PATCH 1

/**
 * @brief print library information
 * 
 */
const char* print_info();

/**
 * @brief add 10 to the input paramter
 * 
 * @param the input parameter
 * @return the result
 */
int bar(int val);

/**
 * @brief add 10 to the input paramter
 * 
 * @param the input parameter
 * @return the result
 */
int foo(int val);
