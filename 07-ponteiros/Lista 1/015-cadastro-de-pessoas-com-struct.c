#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {

    char nome[100];
    float notas[2];
    int registro;
    int idade;
} Aluno;

void cadastro_escolar (Aluno *alunos) {

    int c;
    int minimo_idade = 13;
    int maxima_idade = 18;

    printf ("Digite o nome do aluno: \n");
    fgets (alunos->nome, 100, stdin);

    printf ("Digite a primeira nota: \n");
    scanf ("%f", &alunos->notas[0]);

    while ((c = getchar()) != '\n' && c != EOF);

    printf ("Digite a segunda nota: \n");
    scanf("%f", &alunos->notas[1]);

    while ((c = getchar()) != '\n' && c != EOF);        //Limpando os buffer de memoria;

    alunos->registro = 5000 + (rand() % 10000);
    alunos->idade = minimo_idade + (rand() % ((maxima_idade + 1) - (minimo_idade)));
}

int main () {

    srand(time(NULL));              //Funcao usada para numeros aleatorios e sempre definir outros valores assim que roda;

    Aluno turma_9C[2];
    
    for (int i = 0; i < 2; i++) {

        cadastro_escolar(&turma_9C[i]);
    }

    for (int a = 0; a < 2; a++) {

        printf ("Nome: %s\t", turma_9C[a].nome);
        printf ("Idade: %d\t", turma_9C[a].idade);
        printf ("RA do aluno: %d\n", turma_9C[a].registro);

        printf ("Primeira nota: %.2f\t", turma_9C[a].notas[0]);
        printf ("Segunda nota: %.2f\n", turma_9C[a].notas[1]);

        printf ("\n");
    }

    return 0;
}