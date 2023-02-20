#include <stdio.h>
#include "my.h"




int my_print_alpha(void) {
    int asc;
    
    for (asc = 0 ; asc < 26 ;asc++) {
        putchar(asc+97);
    
    }
    putchar('\n');
    return 0;
}

int test(void) {
    char letter = 'a';

    for (int i = 0; letter + i != 'z'; i++) {
        putchar(letter + i);
    }
    putchar('\n');
}
