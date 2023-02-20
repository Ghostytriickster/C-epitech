#include <stdio.h>
#include "my.h"


int my_isneg(int n){

    if (n<0) {
        putchar('N');
        
    } else {
        putchar('P');
    }
    putchar('\n');
    return 0;

}
