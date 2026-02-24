#include <stdio.h>

//mult de a por b... a, b >= 0
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

int main()
{
    int a, b;
    printf("Digite 2 número positivos.\n");
    scanf("%d %d", &a, &b);
    
    int resultado = mult(a, b);
    printf("A multiplicação é: %d", resultado);
    
    return 0;
}
