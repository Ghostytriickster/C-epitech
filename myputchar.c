#include <unistd.h>
void myputchar(char c)
{
    write(1, &c, 1);
}
