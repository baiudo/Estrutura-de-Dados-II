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
    crescente(1, 20);

    return 0;
}
