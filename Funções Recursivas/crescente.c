#include <stdio.h>

//imprimir númros em ordem crescente de 1 a n
int crescente(int i, int f){
    if (i <= 0) {
        return 0;
    } else {
        if (i <= f) {
            printf("%d ", i);
            i++;
            return crescente(i, f);
        }
    }
}

int main()
{
    int i, f;
    
    printf("Vams contar números, o número 1 deve ser o inicial.\nDigite o primeiro (1) e o último número a contagem.\n");
    scanf("%d %d", &i, &f);
    
    if (crescente == 0) {
        printf("Início com 0 ou negativo");
    } else {
        crescente(i, f);   
    }

    return 0;
}
