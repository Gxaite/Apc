#include <stdio.h>

int main()
{
    int imparOuPar, jogador1, jogador2,soma;
    char primeiroVencedor,segundoVencedor,vencedorFinal;
    scanf("%d %d %d",&imparOuPar,&jogador1,&jogador2);
    //0 par 1 impar
    //j1 A j2 B j3 C j4 D
    soma = jogador1 + jogador2;

    //primeiro jogo

    if (imparOuPar == 0)
    {
        if(soma%2 == 0)
        {
            primeiroVencedor = ('A');
        }
        else
        {
            primeiroVencedor =('B');
        }
    }
    else
    {
        if(soma%2 == 0)
        {
            primeiroVencedor = ('B');
        }
        else
        {
            primeiroVencedor =('A');
        }
    }

    //segundo jogo
    scanf("%d %d %d",&imparOuPar,&jogador1,&jogador2);

    soma= jogador1 + jogador2;

    if (imparOuPar == 0)
    {
        if(soma%2 == 0)
        {
            segundoVencedor = ('C');
        }
        else
        {
            segundoVencedor =('D');
        }
    }
    else
    {
        if(soma%2 == 0)
        {
            segundoVencedor = ('D');
        }
        else
        {
            segundoVencedor =('C');
        }
    }

    //terceiro jogo
    scanf("%d %d %d",&imparOuPar,&jogador1,&jogador2);

    soma= jogador1 + jogador2;

    if (imparOuPar == 0)
    {
        if(soma%2 == 0)
        {
            vencedorFinal = primeiroVencedor;
        }
        else
        {
            vencedorFinal =segundoVencedor;
        }
    }
    else
    {
        if(soma%2 == 0)
        {
            vencedorFinal = segundoVencedor;
        }
        else
        {
            vencedorFinal = primeiroVencedor;
        }
    }
    printf("%c\n",vencedorFinal);

    return 0;
}