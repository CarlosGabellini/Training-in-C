#include <stdio.h>
#define N 2

typedef struct {
    int id;
    float salario;
    int tempo_empresa;           //Em anos;

} Funcionario;

void cadastrar_funcionario (Funcionario v[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {

        printf ("Digite o ID do funcionario: \n");
        scanf ("%d", &v[i].id);

        printf ("Digite o salario do funcionario: \n");
        scanf ("%f", &v[i].salario);

        printf ("Digite o tempo da empresa: \n");
        scanf ("%d", &v[i].tempo_empresa);

        printf ("\n");
    }
}

void mostrar_funcionario (Funcionario v1[], int tamanho) {

    for (int j = 0; j < tamanho; j++) {

        printf ("ID: %d\n", v1[j].id);
        printf ("Salario: %.2f\n", v1[j].salario);
        printf ("Tempo de empresa: %d\n", v1[j].tempo_empresa);

        printf ("\n");                                      //Quebra de linha e proximo funcionario;
    }
}

void aplicar_reajuste (Funcionario v2[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {

        if (v2[i].tempo_empresa < 5) {

            v2[i].salario *= 1.05;                              //Aumentar 5% no salario é a mesma coisa que 105%, é porcentagem basica, e 105/100 = 1.05;
        }

        else {

            v2[i].salario *= 1.10;
        }
    }
}

float calcular_folha (Funcionario v3[], int tamanho) {

    float folha_pagamento = 0;

    for (int i = 0; i < tamanho; i++) {

        folha_pagamento += v3[i].salario; 
    }

    return folha_pagamento;
}

int main () {

    Funcionario funcionarios[N];

    cadastrar_funcionario(funcionarios, N);
    mostrar_funcionario (funcionarios, N);

    printf ("\n");

    printf ("O total da folha de pagamento: %.2f\n", calcular_folha(funcionarios, N));

    //Agora vamos fazer depois do reajuste

    printf ("\n");

    for (int k = 0; k < 70; k++)
        printf ("_");

    printf ("\nAgora a folha de pagamento depois do reajuste:\n\n");

    aplicar_reajuste (funcionarios, N);
    mostrar_funcionario (funcionarios, N);

    printf ("Total da folha após o reajuste: %.2f\n\n", calcular_folha(funcionarios, N));

    return 0;
}