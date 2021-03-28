/*
Escreva uma função que recebes 3 valores inteiros e positivos X, Y e Z e que verifique se esses 
valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado.
Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita:
    - o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados.
O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:
    • o Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
    • o Triângulo Isósceles: os comprimentos de 2 lados são iguais.
    • o Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
*/

#include <stdio.h>

int verifica_tipo_triangulo(int n1, int n2, int n3) {
    if (n1 == n2 == n3)
        return 0;
    else if (n1 == n2 || n1 == n3 || n2 == n3)
        return 1;
    return 2;
}

int verifica_triangulo(int n1, int n2, int n3) {
    if (n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2) {
        return verifica_tipo_triangulo(n1, n2, n3);
    }
    return -1;
}

int get_tipo_triangulo(int num) {
    if (num == -1) {
        printf("Não pode ser um triângulo");
    }
    else if (num == 0)
        printf("Triângulo equilátero");
    else if (num == 1)
        printf("Triângulo Isóceles");
    else if (num == 2)
        printf("Triângulo Escaleno");
}

int main() {
    int n1, n2, n3, result;
    printf("Digite o primeiro lado: ");
    scanf("%d", &n1);
    printf("Digite o segundo lado: ");
    scanf("%d", &n2);
    printf("Digite o terceiro lado: ");
    scanf("%d", &n3);

    result = verifica_triangulo(n1, n2, n3);
    get_tipo_triangulo(result);
}