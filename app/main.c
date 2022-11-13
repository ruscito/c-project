#include <stdio.h>
#include "mylib/mylib.h"

int main(void) {
    printf("%s version:%d.%d.%d\n", 
        print_info(),
        MYLIB_VERSION_MAJOR, 
        MYLIB_VERSION_MINOR, 
        MYLIB_VERSION_PATCH);
    return 0;
}