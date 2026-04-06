#include <stdio.h>

//Fazer o Máximo divisor comum usando recursão;

int mdc (int a, int b) {

    if (b == 0) {

        return a;
    }

    return mdc (b, a % b);
}

int main () {

    printf ("Mdc de %d e %d eh %d\n", 20, 15, mdc(20, 15));

    return 0;
}