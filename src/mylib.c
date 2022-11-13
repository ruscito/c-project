#include <stdio.h>
#include "mylib/mylib.h"
#include "utility.h"

int foo(int val){
    return val + 10;
}

int bar(int val){
    return val + 10;
}

//LCOV_EXCL_START
int foobar(int val){
    return val + 10;
}
//LCOV_EXCL_STOP

const char *print_info(){
    return "mylib information";
}
