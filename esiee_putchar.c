#include <unistd.h>

#include "esiee_putchar.h"

void esiee_putchar(int c)
{
    write(1, &c, 1);
}
