#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int contador = 0;
    int i;
    int codigo;
    char nome [999] [999];
    int telefone[999];

    do
    {
        printf("\n");
        printf("\n[1] - ADICIONAR NÚMERO TELEFÔNICO");
        printf("\n[2] - EXIBIR NÚMEROS CADASTRADOS");
        printf("\n");
        printf("\nDigite a opção desejada: ");
        scanf("%d", &codigo);

        system("cls || clear");

        switch (codigo)
        {
        case 1:

            fflush(stdin);
            printf("\nDigite o nome da %dª pessoa: ", contador+1);
            gets(nome[contador]);
            fflush(stdin);

            printf("\nDigite o número de telefone (somente os números): ");
            scanf("%d", &telefone[contador]);

            contador++;

            break;

        case 2:
            break;

        default:

            printf("\nOpção inválida! Digite novamente.");
            printf("\n");
            break;
        }

    } while (codigo != 2);

    system("cls || clear");

    printf("\nNúmeros Cadastrados:\n");

    for (i = 0; i < contador; i++)
    {
        printf("\n(%d) %s - %d", i + 1, nome[i], telefone[i]);
    }
    printf("\n");

    return 0;
}