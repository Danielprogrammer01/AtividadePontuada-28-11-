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
    int j;
    int quantidadeDeAlunos = 5;
    int quantidadeDeNotas = 3;
    float soma[quantidadeDeAlunos];
    float media[quantidadeDeAlunos];
    char situacao[quantidadeDeAlunos][999];
    char nome[quantidadeDeAlunos][999];
    int idade[quantidadeDeAlunos];
    float notas[quantidadeDeAlunos][quantidadeDeNotas];

    // Solicitando e armazenando dados

    for (i = 0; i < quantidadeDeAlunos; i++)
    {
        fflush(stdin);

        printf("\nDigite o nome do %dº aluno: ", i + 1);
        gets(nome[i]);

        fflush(stdin);

        printf("\nDigite a idade: ", i+1);
        scanf("%d", &idade[i]);

        for (j = 0; j < quantidadeDeNotas; j++)
        {

            do
            {

            printf("\nDigite a %dª nota: ", j+1);
            scanf("%f", &notas[i][j]);
        
            // Validando a nota

            if (notas[i][j] > 10 || notas[i][j] < 0)
            {
                printf("\nNOTA INVÁLIDA! Digite novamente.");
                printf("\n");
            }
            
            } while (notas[i][j] > 10 || notas[i][j] < 0);
            
            soma[i] += notas[i][j];

        }

        // Calculando a média

        media[i] = soma[i] / quantidadeDeNotas;

        system("cls || clear");
    }

    // Exibindo dados ao usuário

    for (i = 0; i < quantidadeDeAlunos; i++)
    {
        printf("\n%dº Aluno: %s ", i+1, nome[i]);

        printf("\n");

        printf("\nIdade: %d anos", idade[i]);

        printf("\n");

        for (j = 0; j < quantidadeDeNotas; j++)
        {
            printf("\n%dª Nota: %.1f pontos", j+1, notas[i][j]);
        }

        printf("\n");

        printf("\nMédia: %.1f pontos", media[i]);

        // Definindo situação do aluno

        if (media[i] >= 7.0)
        {
            strcpy(situacao[i], "APROVADO!");
        }
        else if (media[i] >= 5.0)
        {
            strcpy(situacao[i], "EM RECUPERAÇÃO!");
        }
        else
        {
            strcpy(situacao[i], "REPROVADO!");
        }

        printf("\n");

        printf("\nSituação do Aluno: %s", situacao[i]);

        printf("\n");
        printf("\n------------------------------");
        printf("\n");
    }

    return 0;
}
