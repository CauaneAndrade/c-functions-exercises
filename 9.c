/*
Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é par e 0 se n é impar.
*/

#include <stdio.h>

int par_impar(int num) {
    if (num % 2 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int num, result;
    printf("Digite um número: ");
    scanf("%d", &num);
    result = par_impar(num);

    if (result == 1) {
        printf("É par\n");
    } else {
        printf("É ímpar\n");
    }
}