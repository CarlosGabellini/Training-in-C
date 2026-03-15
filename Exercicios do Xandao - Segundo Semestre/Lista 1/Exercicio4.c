#include <stdio.h>

int potencia (int base, int expoente) {

    int resultado = 1;

    for (int i = 1; i <= expoente; i++) {

        resultado *= base;
    }

    return resultado;
}

int log_menor_base (int numero_input) {

    int numero_menor = 2;
    int potencia_numero = 2;

    for (numero_menor; numero_menor < numero_input; numero_menor++) {

        for (int j = 2; j < numero_input; j++) {

            potencia_numero = potencia(numero_menor, j);

            if (potencia_numero == numero_input) {

                return numero_menor;
            }

            else if (potencia_numero > numero_input) {

                break;                  //Vamos para o proximo numero;
            }
        }
    }

    return numero_input;
}

int main () {

    int numero_digitado;

    printf ("Digite um numero: \n");
    scanf ("%d", &numero_digitado);

    printf ("Menor base logaritmica: %d\n", log_menor_base(numero_digitado));

    return 0;
}