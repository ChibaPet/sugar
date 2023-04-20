#include <stdio.h>
#include <stdlib.h>

void usage(void)
{
        fputs("Please supply a number:\n"
            "   if < 40, we convert mmol/l to mg/dl\n"
            "   if > 40, we convert mg/dl to mmol/l\n", stderr);
}

void main(int argc, char *argv[])
{
    float sugar;

    if (argc < 2) {
        usage();
        exit(1);
    }

    sugar = strtof(argv[1], NULL);
    if (sugar == 0) {
        usage();
        exit(1);
    }

    if (sugar < 40) {
        printf("%0.1f mmol/l = %0.0f mg/dl\n", sugar, sugar * 18);
    } else {
        printf("%0.0f mg/dl = %0.1f mmol/l\n", sugar, sugar / 18);
    }
    exit(0);
}
