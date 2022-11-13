#include "unity.h"
#include "mylib/mylib.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_foo(){
    TEST_ASSERT_EQUAL_INT32(11, foo(1));
}

void test_bar(){
    TEST_ASSERT_EQUAL_INT32(11, bar(1));
}

void test_print_info() {
    TEST_ASSERT_EQUAL_STRING("mylib information", print_info());
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_foo);
    RUN_TEST(test_bar);
    RUN_TEST(test_print_info);
    return UNITY_END();
}