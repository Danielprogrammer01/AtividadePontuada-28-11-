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

    int i;
    int quantidade = 5;
    int numero[quantidade];
    int maiorNumero = INT_MIN;
    int menorNumero = INT_MAX;
    int quantidadeImpares = 0;
    int quantidadePares = 0;
    int quantidadeNegativos = 0;
    int somaPares = 0;
    int somaGeral = 0;
    float mediaPares;
    float mediaGeral;

    // Solicitando e armazenando dados

    for (i = 0; i < quantidade; i++)
    {

        printf("\nDigite o %dº número: ", i+1);
        scanf("%d",&numero[i]);
        somaGeral += numero[i];
        

        if (numero[i] % 2 == 0)
        {
            quantidadePares++;
            somaPares += numero[i];

        }
        else
        {
            quantidadeImpares++;
        }

        if (numero[i] < 0)
        {
            quantidadeNegativos++;
        }
        

        // Validando maior e menor número com operador ternário

        maiorNumero = numero[i] > maiorNumero ? numero[i] : maiorNumero;
        menorNumero = numero[i] < menorNumero ? numero[i] : menorNumero;


        system("cls || clear");
    }

    mediaPares = (float)somaPares / (float) quantidadePares;
    mediaGeral = (float)somaGeral / (float)quantidade;

    //Exibindo Resultado

    printf("\nQuantidade de números Ímpares: %d", quantidadeImpares);

    printf("\nQuantidade de números negativos: %d", quantidadeNegativos);
    
    printf("\nMaior número: %d", maiorNumero);

    printf("\nMenor número: %d", menorNumero);
    
    printf("\nMédia dos pares: %.1f", mediaPares);
    
    printf("\nMédia Geral: %.1f", mediaGeral);
    
    return 0;
}