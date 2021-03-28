/*
Escreva uma função que leia um inteiro não-negativo n e
imprima a soma dos n primeiros números primos
*/

#include <stdio.h>
#include <string.h>

int primo(int num) {
    int result = 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            result++;
        }
    }
    if (result > 0) {
        return 0;
    } else {
        return 1;
    }
}
int soma_primos(int num) {
    int array[num - 1];
    int size_array = sizeof(array) / sizeof *array;
    int c = 0, i = 2, soma = 0;
    do {
        if (primo(i) == 1) {
            array[c] = i;
            c++;
        }
        i++;
    } while (c <= size_array);

    for (i = 0; i <= size_array; i++)
    {
        soma += array[i];
    }
    printf("Número = %d\n", num);
    printf("Soma = %d\n", soma);
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    soma_primos(num);
}