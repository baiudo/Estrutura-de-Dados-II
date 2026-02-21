#include <stdio.h>

/*mult de a por b... a, b >= 0*/
int mult (int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    } else if (a < 0 || b < 0) {
        if (a < 0) {
            return mult(-a, b);
        } else if (b < 0) {
            return mult(a, -b);
        } else {
            return mult(-a, -b);
        }
    } else {
        return a + mult(a, b - 1);
    }
}

/*maior elemento d eum vetor e tamanho n*/
int numeros[7] = {3, 1, 6, 7, 2, 9, 5};

int maior_elem (numeros, int a) {
    if numeros = NULL {
        return NULL;
    } else if {
        
    }
}

/*retorna se o elemento pertence ao vetor*/
/*calcule o mdc de a e b... a, b > 0*/
int main()
{
    int resultado = mult(-1, 4);
    printf("A multiplicação é: %d", resultado);
    
    return 0;
}
