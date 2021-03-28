/*
Faça 3 funções:
    • ler: - uma função que receba dois número inteiro positivo n;
    • multiplicar: - que multiplique os números recebidos na função ler;
    • imprimir: - que imprima o resultado da função multiplicar.
*/

#include <stdio.h>

struct greaterSmaller {
    int greater, smaller;
};
  
typedef struct greaterSmaller Struct;

Struct ler(int num1, int num2) {
    Struct s;
    s.greater = num1;
    s.smaller = num2;
    return s;
}

int multiplicar(int num1, int num2) {
    return num1 * num2;
}

int imprimir(int num) {
    printf("Resultado = %d\n", num);
}

int main() {
    int num1, num2, multiplicacao;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    num1 = ler(num1, num2).greater;
    num2 = ler(num1, num2).smaller;
    
    multiplicacao = multiplicar(num1, num2);
    imprimir(multiplicacao);
}