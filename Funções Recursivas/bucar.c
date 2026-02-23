#include <stdio.h>

//retorna se o elemento pertence ao vetor
int buscar (int vetor[], int tamanho, int n) {
    if (tamanho <= 0) {
        return 0;
    } else if (vetor[tamanho - 1] == n) {
        return 1;
    } else {
        return buscar(vetor, tamanho - 1, n);
    }
}

int main()
{
    int vetor[] = {6, 3, 7, 1, 2, 4, 5, 9, 0, 8};
    int tamanho = 10;
    int n = 2;
    
    int busca = buscar(vetor, tamanho, n);
    
    if (busca == 1) {
        printf("O número %d está no vetor.", n);
    } else {
        printf("Vetor vazio ou número não encontrado.");
    }

    return 0;
}
