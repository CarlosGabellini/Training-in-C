#include <stdio.h>

int variavel_global = 2;         //Tentar não alterar este valor para o programa funcionar corretamente, somente use ele para controlar vetores e tamanhos;

typedef struct {
    int numero_conta;
    char tipo;                  //"C" para corrente e "P" para poupança;
    float saldo;

} Conta;

void cadastrar_conta (Conta conta[], int tamanho) {

    printf ("Bem vindo ao banco!\n");

    for (int i = 0; i < tamanho; i++) {

        printf ("Digite o numero da conta: \n");
        scanf ("%d", &conta[i].numero_conta);

        printf ("Qual o tipo? \n");
        scanf (" %c", &conta[i].tipo);

        printf ("\n");

        conta[i].saldo = 0;                 //Todas as contas do banco começam com 0, por que é o que acontece quando você cadastra uma conta no banco;
    }
}

int buscar_conta (Conta vetor[], int tamanho, int numero)  {

    int procurar = 0;

    for (procurar = 0; procurar < tamanho; procurar++) {

        if (vetor[procurar].numero_conta == numero) {
            break;
        }
    }

    if (vetor[procurar].numero_conta != numero) {

        printf ("Conta não encontrada!\n");
        return -1;
    }
 
    return procurar;
}

void depositar_conta (Conta vetor[], int tamanho, int numero) {

    int numero_da_conta = buscar_conta(vetor, tamanho, numero);                     //Chamando a segunda função para ajudar a encontrar;

    if (numero_da_conta == -1) {
        return 0;
    }

    float valor_para_depositar = 0;

    printf ("\nQual o valor você quer depositar? \n");
    scanf ("%f", &valor_para_depositar);

    if (valor_para_depositar <= 0) {

        printf ("Numero invalido!\n");
        printf ("Tente novamente!\n");

        valor_para_depositar = 0;
    }

    vetor[numero_da_conta].saldo += valor_para_depositar;

    printf ("Agora sua conta tem o saldo de: \n");
    printf ("%.2f\n", vetor[numero_da_conta].saldo);
}

void sacar_conta (Conta vetor[], int tamanho, int numero) {

    int buscar_numero = buscar_conta(vetor, tamanho, numero);
    int sacar = 0;

    if (buscar_numero == -1) {
        return 0;
    }

    printf ("Quanto você quer sacar? \n");
    scanf ("%d", &sacar);

    if (sacar > vetor[buscar_numero].saldo) {

        printf ("Saldo invalido na conta! Dinheiro insuficiente!\n");
        return 0;
    }

    else {

        vetor[buscar_numero].saldo -= sacar;

        printf ("Agora a sua conta tem: %.2f reais\n", vetor[buscar_numero].saldo);
    }
}

float total_banco (Conta vetor[], int tamanho) {

    float saldo_total = 0;

    for (int i = 0; i < tamanho; i++) {

        saldo_total += vetor[i].saldo;
    }

    return saldo_total;
}
 
int main () {

    Conta conta_bancaria[variavel_global];
    int escolha = 1;

    cadastrar_conta(conta_bancaria, variavel_global);

    while (escolha != 0) {

        int numero_conta = 0;

        printf ("Você quer fazer um deposito ou saque? \n");
        printf ("Opção 1: Deposito.\n");
        printf ("Opção 2: Saque.\n");
    
        scanf ("%d", &escolha);

        switch (escolha) {

        case 1:

        printf ("Digite o numero da sua conta: \n");
        scanf ("%d", &numero_conta);
            
        depositar_conta(conta_bancaria, variavel_global, numero_conta);
        break;
        
        case 2:

        printf ("Digite o numero da sua conta: \n");
        scanf ("%d", &numero_conta);
        sacar_conta(conta_bancaria, variavel_global, numero_conta);
        break;

        default:
        break;
        }

        printf ("Digite 0 caso queira sair do programa!\n");

        printf ("\n");
    }

    printf ("Total do banco: %.2f\n", total_banco(conta_bancaria, variavel_global));

    printf ("Programa encerrado!\n");

    return 0;
}