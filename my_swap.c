#include <stdio.h>
#include <unistd.h>
#include "my.h"
void my_swap(int *a, int *b){

    int *test= b;
    b=a;
    a=test;

    putchar(*b + 48);
}
