#include <stdio.h>

int variavel_global_para_anos = 2;

typedef struct {

    int dia;
    int mes;
    int ano;

} Ano_Cronologico;

Ano_Cronologico Anos_de_vida () {

    Ano_Cronologico meus_anos;

    printf ("Digite o dia: ");
    scanf ("%d", &meus_anos.dia);

    printf ("Digite o mes de vida: ");
    scanf ("%d", &meus_anos.mes);

    printf ("Digite agora o ano: ");
    scanf ("%d", &meus_anos.ano);

    printf ("\n");

    return meus_anos;               //Voltando varios tipos de dado em um unico vetor;
}

void ordena(Ano_Cronologico data_vet[], int tamanho) {

    int indice_menor = 0;

    int registro_ano = 0;
    int registro_mes = 0;
    int registro_dia = 0;

    //Primeiro ordenando os anos;

    for (int i = 0; i < tamanho; i++) {

        indice_menor = i;

        for (int j = i + 1; j < tamanho; j++) {

            if (data_vet[j].ano < data_vet[indice_menor].ano) {

                indice_menor = j;
            }
        }

        registro_ano = data_vet[i].ano;
        registro_mes = data_vet[i].mes;
        registro_dia = data_vet[i].dia;

        //Logica bem dificil de fazer, por que se eu alterar o vetor do ano, presciso com que o mês e os dias também fiquem acompanhados;

        data_vet[i].ano = data_vet[indice_menor].ano;
        data_vet[indice_menor].ano = registro_ano;

        data_vet[i].mes = data_vet[indice_menor].mes;
        data_vet[indice_menor].mes = registro_mes;

        data_vet[i].dia = data_vet[indice_menor].dia;
        data_vet[indice_menor].dia = registro_dia;
    }
}

int main () {

    Ano_Cronologico anos_vividos[variavel_global_para_anos];

    for (int i = 0; i < variavel_global_para_anos; i++) {

        anos_vividos[i] = Anos_de_vida();
    }

    ordena(anos_vividos, variavel_global_para_anos);

    for (int j = 0; j < variavel_global_para_anos; j++) {

        printf ("Ano de nascimento: %d, mes: %d, e dia: %d\n", anos_vividos[j].ano, anos_vividos[j].mes, anos_vividos[j].dia);
    }

    return 0;
}