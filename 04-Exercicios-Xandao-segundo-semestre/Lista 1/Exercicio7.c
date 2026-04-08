#include <stdio.h>

/*Aqui a função já é autoexplicativa, basicamente queremos saber como se faz a formula de desvio padrão adaptada
para codigo.*/

int variavel_global = 4;

/*Usando a raiz quadrada aqui por que usamos raiz quadrada na formula de desvio padrao, eu preferi fazer minha propria
formula do que pegar a função SQRT pronta, por que os exercicios do meu professor exigem que usemos somente a função
main como entrada.
Esse daqui é o algoritmo de Newton-Raphson otimizado para codigo.*/

float raiz_quadrada (float numero1) {

    float resultado = numero1;

    for (int i = 0; i < 20; i++) {

        resultado = (1.0f/2.0f) * (resultado + (numero1 / resultado));
    }

    return resultado;
}

float desvio_padrao (float vetor[], int tamanho) {

    if (tamanho < 2) {

        return 0;
    }

    float desvio_padrao = 0;
    float tamanho_flutuante = tamanho;                          //Convertendo o tamanho aqui para flutuante para dar certo no for;
    float soma_total = 0;
    float soma_ao_quadrado = 0;
    float guardar_resultado = 0;

    //Calculando as somatorias nesse for antes de começar a fazer o programa;

    for (int j = 0; j < tamanho; j++) {

        soma_total += vetor[j];
        soma_ao_quadrado += (vetor[j] * vetor[j]);
    }

    desvio_padrao = (soma_total * soma_total) / tamanho_flutuante;
    guardar_resultado = desvio_padrao;

    //Guardar resultado serve para guardar uma parte da equação e reutilizar ela a seguir, para fins de espaço e mais legibilidade no codigo;

    desvio_padrao = soma_ao_quadrado - guardar_resultado;

    desvio_padrao *= 1.0 / (tamanho_flutuante - 1.0);

    desvio_padrao = raiz_quadrada(desvio_padrao);

    return desvio_padrao;
}

float media_vetor (float vetor[], int tamanho) {

    float media = 0;

    for (int i = 0; i < tamanho; i++) {

        media += vetor[i];
    }

    return media / tamanho;
}

int main () {

    float array[variavel_global];
    float soma = 0;


    for (int i = 0; i < variavel_global; i++) {

        printf ("Digite a altura: \n");
        scanf ("%f", &array[i]);

        soma += array[i];

        printf ("\n");

        printf ("Proximo soldado!\n\n");
    }

    printf ("Soma total: %.3f\n", soma);
    printf ("A media do vetor eh: %.3f\n", media_vetor(array, variavel_global));
    printf ("Desvio padrão: %.3f\n", desvio_padrao(array, variavel_global));

    return 0;
}
