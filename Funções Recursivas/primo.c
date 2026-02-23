#include <stdio.h>

//checar se o número é primo com complexidade O(sqrt()) -> (Big O(raiz de n))
int primoCheck (int n, int divisor) {
    if (n % divisor == 0) {
        return 0;
    } else {
        if (divisor * divisor <= n) { //i * i <= n (é o mesmo que i <= raiz de n)
            return primoCheck(n, divisor + 1);
        } else {
            return 1;
        }
    }
}

int primo (int n) {
    if (n <= 1) {
        return 0;
    } else {
        return primoCheck(n, 2);
    }
}

int main()
{   
    int n = 29;
    
    if (primo(n) == 0) {
        printf("O número %d naõ é primo.", n);
    } else {
        printf("O número %d é primo.", n);
    }
    
    return 0;
}
