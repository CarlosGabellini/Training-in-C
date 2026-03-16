#include <stdio.h>

/*O desafio desse exercicio aqui é saber se um numero é pitagórico ou não criando uma função com 3 parametros, um
numero é pitagorico quando:

(2*2) + (3*3) = 13;

13 é pitagórico pois as somas de 2 numeros ao quadrado formam este determinado numero, e basicamente este exercicio
aqui é a implementação de uma função para colocar isso na prática.
*/

int entrada_saida (char texto[]) {

    int numero_digitado;

    printf ("%s\n", texto);
    scanf ("%d", &numero_digitado);

    return numero_digitado;
}

int potencia (int base, int expoente) {

    int resultado = 1;

    for (int i = 1; i <= expoente; i++) {

        resultado *= base;
    }

    return resultado;
}

int numero_pitagorico (int numero, int numero2, int numero3) {

    int validacao = (potencia(numero, 2)) + (potencia(numero2, 2));

    printf ("Validacao: %d\n", validacao);

    if (validacao == numero3) {

        return 1;
    }

    else {

        return 0;
    }
}

int solo_pitagorico (int numero_digitado) {

    int resultado = 1;

    //Nessa parte otimizamos o codigo, onde o numero externo e o interno somente vão até a raiz quadrada do numero digitado;

    for (int numero_externo = 1; (numero_externo * numero_externo) <= numero_digitado; numero_externo++) {

        for (int numero_interno = 1; (numero_interno * numero_interno) <= numero_digitado; numero_interno++) {

            resultado = (potencia(numero_interno, 2)) + (potencia (numero_externo, 2));

            if (resultado == numero_digitado) {

                return 1;
            }
        }
    }
    
    return 0;
}

int main () {

    int numero_input;
    int numero_input2;
    int numero_input3;

    numero_input = entrada_saida("Digite o primeiro numero:");
    numero_input2 = entrada_saida("Digite o segundo numero:");
    numero_input3 = entrada_saida("Digite o terceiro numero:");

    printf ("Os dois primeiros numeros é pitagórico do terceiro? \n");
    printf ("%d\n", numero_pitagorico(numero_input, numero_input2, numero_input3));

    printf ("Mesmo resultado aqui? %d.\n", solo_pitagorico(numero_input3));

    return 0;
}
