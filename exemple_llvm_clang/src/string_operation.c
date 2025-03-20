#include "string_operations.h"

int tamanho_string(const char *str)
{
    int tamanho = 0;
    while (str[tamanho] != '\0')
    {
        tamanho++;
    }
    return tamanho;
}

void inverter_string(char *str)
{
    int tamanho = tamanho_string(str);
    for (int i = 0; i < tamanho / 2; i++)
    {
        char temp = str[i];
        str[i] = str[tamanho - i - 1];
        str[tamanho - i - 1] = temp;
    }
}