#include <stdio.h>

//retorna se o elemento pertence ao vetor
int buscar (int vetor[], int tamanho, int n){
    if (tamanho <= 0) {
        printf("Vetor vazio ou número não encontrado.");
        return 0;
    } else if (vetor[tamanho - 1] == n) {
        printf("O número %d está no vetor.", n);
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
    
    buscar(vetor, tamanho, n);

    return 0;
}
