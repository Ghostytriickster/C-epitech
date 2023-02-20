#include <stdio.h>
#include "my.h"


int my_print_digits(void) {

    int nmb;

    for (nmb = 0; nmb <10 ; nmb++) {
        putchar(nmb+48);
    }
    putchar('\n');
    return 0;

}
