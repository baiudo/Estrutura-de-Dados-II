#include <stdio.h>

//maior elemento de um vetor de tamanho n
int maior_elemento(int vetor[], int n) {
    if (n <= 0) {
        printf("O vetor está vazio.\n");
        return -1;
    } else if (n == 1) {
        return vetor[0];
    } else {
        int maior_valor = maior_elemento(vetor, n - 1);
        if (vetor[n - 1] > maior_valor) {
            return vetor[n - 1];
        } else {
            return maior_valor;
        }
    }
}

int main()
{
    int vetor[] = {6, 3, 7, 1, 2, 4, 5, 9, 0, 8};
    int tamanho = 0;
    
    int maior = maior_elemento(vetor, tamanho);
    if (maior == -1) {
        printf("Nao foi possivel encontrar o maior elemento.");
    } else {
        printf("O maior elemento é: %d\n", maior);
    }
    
    return 0;
}
