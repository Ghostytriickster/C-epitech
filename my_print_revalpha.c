#include <stdio.h>
#include "my.h"



int my_print_revalpha(void) {
    int nasc;
    
    for (nasc=122; nasc>96 ; nasc--) {
        putchar(nasc);

    }
    putchar('\n');
    return 0;
}
