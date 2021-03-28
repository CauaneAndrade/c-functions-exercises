/*
Resolver o exercício anterior de forma recursiva.
OBS: Resolver de forma recursiva.
*/

#include <stdio.h>

int fat_recursivo(int num) {
    int result;
    if (num > 1) {
        result = num * fat_recursivo(num - 1);
        return result;
    }
    else {
        return 1;
    }
}

int main() {
    int num, f;
    printf("Digite um número: ");
    scanf("%d", &num);
    f = fat_recursivo(num);
    printf("Fatorial de %d = %d\n", num, f);
}