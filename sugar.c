#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    float sugar;

    sugar = strtof(argv[1], NULL);

    if (sugar < 40) {
        printf("%0.1f mmol/l = %0.0f mg/dl\n", sugar, sugar * 18);
    } else {
        printf("%0.0f mg/dl = %0.1f mmol/l\n", sugar, sugar / 18);
    }
}
