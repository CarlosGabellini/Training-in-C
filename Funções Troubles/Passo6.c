#include <stdio.h>

/*O objetivo aqui é criar duas funções simples onde calculos o salario de alguns funcionarios com struct e comparamos quem é o maior salario
e qual é o menor.*/

typedef struct {

    int id;
    int horas;
    float valor_hora;

} funcionario;

float calcular_salario (funcionario funcionarios) {

    return funcionarios.horas * funcionarios.valor_hora;
}

int digitar_informacoes (char texto[]) {

    int informacao;
    printf ("%s\n", texto);

    scanf ("%d", &informacao);

    return informacao;
}

float valor_hora (char texto[]) {

    float informacao2;
    printf ("%s\n", texto);

    scanf ("%f", &informacao2);

    return informacao2;
}

int maior_salario (funcionario funcionarios[], int tamanho) {

    int maior = 0;

    for (int i = 1; i < tamanho; i++) {

        float salario_maior = calcular_salario(funcionarios[maior]);
        float salario_atual = calcular_salario(funcionarios[i]);

        if (salario_maior < salario_atual) {

            maior = i;
        }
    }

    return maior;
}

int main () {

    funcionario funcionarios[2];
    int controle = 0;
    int indice_maior_salario = 0;

    for (int i = 0; i < 2; i++) {

        funcionarios[i].id = digitar_informacoes("Digite o id do funcionario:");
        funcionarios[i].horas = digitar_informacoes ("Digite as horas trabalhadas:");
        funcionarios[i].valor_hora = valor_hora ("Digite o valor hora do funcionario:");

        printf ("\n\n");
    }

    while (controle < 2) {

        printf ("ID: %d\n", funcionarios[controle].id);
        printf ("Horas trabalhadas: %d\n", funcionarios[controle].horas);
        printf ("Valor hora: %.2f\n", funcionarios[controle].valor_hora);
        printf ("O salario eh: %.2f\n", calcular_salario(funcionarios[controle]));

        printf ("\n\n");

        controle++;
    }

    indice_maior_salario = maior_salario(funcionarios, 2);

    printf ("O maior salario eh: %.2f\n", calcular_salario(funcionarios[indice_maior_salario]));
    printf ("ID do maior salario: %d\n", funcionarios[indice_maior_salario].id);

    return 0;
}