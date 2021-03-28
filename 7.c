/*
Escreva uma função recursiva que receba, por parâmetro, dois valores X e Z e calcula e retorna X^Z.
Sem utilizar funções prontas.
*/

#include <stdio.h>

int potencia_recursiva(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    }
    return base * potencia_recursiva(base, expoente - 1);
}

int main() {
    int base, expoente, r;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite um expoente: ");
    scanf("%d", &expoente);
    r = potencia_recursiva(base, expoente);
    printf("%d\n", r);
}