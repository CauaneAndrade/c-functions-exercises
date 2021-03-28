/*
Faça uma função que receba, por parâmetro, um valor inteiro e positivo
e retorna o número de divisores desse valor.
*/

#include <stdio.h>

int divisores(int num) {
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    divisores(num);
}