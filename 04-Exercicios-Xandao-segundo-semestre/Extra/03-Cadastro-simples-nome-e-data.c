#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
} datas;

typedef struct {
    char nome[200];
    datas de_nascimento;
} Cadastro;

void CadastrarPessoa(Cadastro *pessoas, int size) {

    int c;

    printf("Digite seu nome: ");
    fgets(pessoas->nome, 200, stdin);

    pessoas->nome[strcspn(pessoas->nome, "\n")] = '\0';         //Retirando o \n;

    while((c = getchar()) != '\n' && c != EOF);

    printf("Digite o dia: ");
    scanf("%d", pessoas->de_nascimento.dia);

    while((c = getchar()) != '\n' && c != EOF);

    printf("Digite o mes: ");
    scanf("%d", pessoas->de_nascimento.mes);

    while((c = getchar()) != '\n' && c != EOF);

    printf("Digite o ano: ");
    scanf("%d", pessoas->de_nascimento.ano);

    while((c = getchar()) != '\n' && c != EOF);
}

int main() {

    Cadastro *brasileiros = (Cadastro*) malloc(10 * sizeof(Cadastro));

    //Meu maior desafio agora eh fazer uma lista funcional e com InsertionSort;

    return 0;
}