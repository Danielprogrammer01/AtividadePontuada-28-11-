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

    int i, j;
    int quantidade = 5;
    char nome[quantidade][999];
    int idade[quantidade];
    float peso[quantidade];
    float altura[quantidade];
    float maiorAltura = INT_MIN;
    float menorAltura = INT_MAX;
    float maiorPeso = INT_MIN;
    float menorPeso = INT_MAX;
    int maiorIdade = INT_MIN;
    int menorIdade = INT_MAX;

    // Solicitando e armazenando dados

    for (i = 0; i < quantidade; i++)
    {
        fflush(stdin);

        printf("\nDigite o nome da %dª pessoa: ", i + 1);
        gets(nome[i]);

        fflush(stdin);

        printf("\nDigite a idade: ", i + 1);
        scanf("%d", &idade[i]);

        // Definindo maior e menor idade com operador ternário

        maiorIdade = idade[i] > maiorIdade ? idade[i] : maiorIdade;
        menorIdade = idade[i] < menorIdade ? idade[i] : menorIdade;

        printf("\nDigite a altura em metros: ", i+1);
        scanf("%f", &altura[i]);

        // Definindo maior e menor altura com operador ternário

        maiorAltura = altura[i] > maiorAltura ? altura[i] : maiorAltura;
        menorAltura = altura[i] < menorAltura ? altura[i] : menorAltura;

        printf("\nDigite o peso: ", i + 1);
        scanf("%f", &peso[i]);

        //  Definindo maior e menor peso com estrutura condicional

        if (peso[i] > maiorPeso)
        {
            maiorPeso = peso[i];
        }

        if (peso[i] < menorPeso)
        {
            menorPeso = peso[i];
        }
        
        system("cls || clear");
    }

    // Exibindo dados ao usuário

    for (i = 0; i < quantidade; i++)
    {
        printf("\n%dª Pessoa: %s ", i + 1, nome[i]);
        
        printf("\n");

        printf("\nIdade: %d anos", idade[i]);

        printf("\nAltura: %.2fm", altura[i]);

        printf("\nPeso: %.1fKg", peso[i]);
        
        printf("\n");

    }
   
    printf("-----------------------");

    printf("\nMaior altura: %.2fm", maiorAltura);
    printf("\nMenor altura: %.2fm", menorAltura);

    printf("\n");

    printf("\nMaior peso: %.1fKg", maiorPeso);
    printf("\nMenor peso: %.1fKg", menorPeso);

    printf("\n");

    printf("\nMaior idade: %d anos", maiorIdade);
    printf("\nMenor idade: %d anos", menorIdade);

    printf("\n");

    return 0;
}
