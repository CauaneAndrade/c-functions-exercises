/*
Faça uma função para calcular o fatorial de um número fornecido pelo usuário.
A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.
Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1.
*/
#include <stdio.h>

int fat(int num) {
    int c = 1;
    for (int i = 2; i <= num; i++) {
        c *= i;
    }
    printf("Fat(%d) = %d\n", num, c);
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    fat(num); // -> 24
}