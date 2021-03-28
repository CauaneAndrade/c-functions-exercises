/*
Escreva uma função que recebe um inteiro positivo n e
devolve 1 se n é primo, 0 em caso contrário
*/

#include <stdio.h>

int primo(int num) {
    int result = 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            result++;
        }
    }
    if (result > 0) {
        printf("0\n");
    } else {
        printf("1\n");
    }
}

int main() {
    // núm. primo: maior que 1 e é divisível apenas por um e por ele mesmo
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    primo(num);
}