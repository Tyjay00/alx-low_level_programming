#include <unistd.h>

/**
* My _putchac.c file
*/

int _putchar(char c)
{
    return write(STDOUT_FILENO, &c, 1);
}
