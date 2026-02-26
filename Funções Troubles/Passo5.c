#include <stdio.h>

//Exercicio usado para utilizar uma struct dentro de uma função e como as duas se comportam, aqui é um programa simples feito para saber
//como calcular a media utilizado uma função.

typedef struct {

    int matricula;
    float nota1;
    float nota2;
    float media_aluno;

} alunos;

float calcular_media (alunos alunos_A) {

    return (alunos_A.nota1 + alunos_A.nota2) / 2;
}

int main () {

    alunos alunos[2];

    for (int i = 0; i < 2; i++) {

        printf ("Digite a matricula do aluno: \n");
        scanf ("%d", &alunos[i].matricula);

        printf ("Digite a primeira nota do aluno: \n");
        scanf ("%f", &alunos[i].nota1);

        printf ("Digite a segunda nota do aluno: \n");
        scanf ("%f", &alunos[i].nota2);
    }

    for (int j = 0; j < 2; j++) {

        alunos[j].media_aluno = calcular_media(alunos[j]);

            printf ("Numero da matricula: %d\n", alunos[j].matricula);
            printf ("A media do aluno: %.2f\n", alunos[j].media_aluno);
        
        if (alunos[j].media_aluno >= 7) {

            printf ("APROVADO!\n\n");
        }

        else {

            printf ("REPROVADO!\n\n");
        }        
    }

    return 0;
}