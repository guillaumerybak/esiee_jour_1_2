#include "esiee_putchar.h"

void esiee_print_flags(int flags)
{
    if (flags & 1) {
        esiee_putchar('a');
    }
    if ((flags >> 1) & 1) {
        esiee_putchar('b');
    }
    if ((flags >> 2) & 1) {
        esiee_putchar('6');
    }
    if ((flags >> 3) & 1) {
        esiee_putchar('d');
    }
    if ((flags >> 4) & 1) {
        esiee_putchar('1');
    }
    if ((flags >> 5) & 1) {
        esiee_putchar('_');
    }
    if ((flags >> 6) & 1) {
        esiee_putchar('g');
    }
    if ((flags >> 7) & 1) {
        esiee_putchar('^');
    }
    if ((flags >> 10) & 1) {
        esiee_putchar('\t');
    }
    if ((flags >> 16) & 1) {
        esiee_putchar('?');
    }
    esiee_putchar('\n');
}

int main(void)
{
    esiee_print_flags(5);
    esiee_print_flags(1);
    esiee_print_flags(1337);
    esiee_print_flags(-2);
    esiee_print_flags(42);
}
