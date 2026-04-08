#include <stdio.h>

/*Usando a recursão para uma busca binaria, onde devo encontrar um elemento no vetor linear de forma agressiva e bastante rápida
    para achar o elemento na posição certa.
*/

//Fazendo a lista;

int Buscabinaria (int vetor[], int inicio, int fim, int alvo);

int Buscabinaria (int vetor[], int inicio, int fim, int alvo) {

    if (inicio > fim) {

        return - 1;
    }

    //Validando primeiro o inicio e o fim;

    int meio = (inicio + fim) / 2;

    if (alvo < vetor[meio]) {

        //O elemento só pode estar na esquerda;

        return Buscabinaria(vetor, inicio, meio - 1, alvo);
    }

    else if (alvo > vetor[meio]) {

        //O elemento só pode estar na direita;

        return Buscabinaria(vetor, meio + 1, fim, alvo);
    }

    else {

        //De qualquer forma, se existir o elemento, ele sempre vai parar nesse if. 

        return meio;
    }
}

int main () {

    int vetor[5] = {1, 2, 3, 7, 10};

    printf ("O %d está na posicão %d do vetor.\n", 1, Buscabinaria(vetor, 0, 4, 1));

    return 0;
}