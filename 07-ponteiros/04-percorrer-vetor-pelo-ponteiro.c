#include <stdio.h>

int main () {

    short int array[5] = {1, 2, 3, 4, 5};
    short int *ponteiro = array;

    for (int i = 0; i < 5; i++) {

        printf ("%hd\n", ponteiro[i]);
    }

    return 0;
}