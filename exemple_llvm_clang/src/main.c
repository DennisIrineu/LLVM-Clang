#include "math_operations.h"
#include "string_operations.h"
#include "utils.h"
#include <stdio.h>

int main()
{
    imprimir_boas_vindas();

    int a = 10, b = 5;
    printf("Soma: %d\n", soma(a, b));
    printf("Subtração: %d\n", subtracao(a, b));
    printf("Multiplicação: %d\n", multiplicacao(a, b));
    printf("Divisão: %.2f\n", divisao(a, b));

    char str[] = "LLVM";
    printf("Tamanho da string: %d\n", tamanho_string(str));
    inverter_string(str);
    printf("String invertida: %s\n", str);

    return 0;
}