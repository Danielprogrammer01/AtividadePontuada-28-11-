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
    char nomeDoProduto[999][999];
    float preco[999];
    int quantidade[999];
    float valorDaVenda[999];
    int codigo;
    int contadorDeVendas = 0;
    float faturamento;

    // Solicitando e Armazenando Dados

    do
    {
        printf("\n");
        printf("\n[1] - ADICIONAR VENDA");
        printf("\n[2] - EXIBIR TOTAL DE VENDAS\n");
        printf("\n");
        printf("\nDigite a opção desejada: ");
        scanf("%d", &codigo);

        system("cls || clear");

        switch (codigo)
        {

        case 1:

            fflush(stdin);

            printf("\nDigite o nome do produto: ");
            gets(nomeDoProduto[contadorDeVendas]);

            fflush(stdin);

            printf("\nDigite o preço: R$");
            scanf("%f", &preco[contadorDeVendas]);

            printf("\nDigite a quantidade: ");
            scanf("%d", &quantidade[contadorDeVendas]);

            valorDaVenda[contadorDeVendas] = preco[contadorDeVendas] * quantidade[contadorDeVendas];
            faturamento += (preco[contadorDeVendas] * quantidade[contadorDeVendas]);
            contadorDeVendas++;

            break;

        case 2:

            // Exibindo Dados ao Usuário

            printf("\n");
            printf("\nTotal de Vendas: %d", contadorDeVendas);
            printf("\nFaturamento: R$%.2f", faturamento);
            printf("\n");
            printf("\nVendas: ");
            printf("\n");

            for (i = 0; i < contadorDeVendas; i++)
            {
    
                printf("\n%dª Venda", i + 1);
                printf("\n");
                printf("\nNome do produto: %s", nomeDoProduto[i]);
                printf("\nPreço: R$%.2f", preco[i]);
                printf("\nQuantidade: %d", quantidade[i]);
                printf("\nValor da venda: %.2f", valorDaVenda[i]);
                printf("\n");
            }

            break;

        default:

            printf("\nOpção Inválida! Digite novamente.\n");

            break;
        }

    } while (codigo != 2);

    return 0;
    
}