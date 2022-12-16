#include <stdio.h>

int main()
{
    int jogador1,jogador2;
    // pedra vale 0/ papel vale 1/ tesoura vale 2/ lagarto vale 3/ spock vale 4

    scanf("%d %d",&jogador1,&jogador2);

    if(jogador1 == jogador2)
    {
        printf("empate\n");
        return 0;
    }
    //pedra
    if (jogador1 == 0 &&(jogador2 == 2||jogador2 == 3))
    {
        printf("A\n");
        return 0;
    }
    else if (jogador1 == 0 &&(jogador2 == 4||jogador2 == 1))
    {
        printf("B\n");
        return 0;
    }
    //papel
    if (jogador1 == 1 &&(jogador2 == 4||jogador2 == 0))
    {
        printf("A\n");
        return 0;
    }
    else if (jogador1 == 1 &&(jogador2 == 3||jogador2 == 2))
    {
        printf("B\n");
        return 0;
    }
    //tesoura
    if (jogador1 == 2 &&(jogador2 == 1||jogador2 == 3))
    {
        printf("A\n");
        return 0;
    }
    else if (jogador1 == 2 &&(jogador2 == 4||jogador2 == 0))
    {
        printf("B\n");
        return 0;
    }
    //lagarto
    if (jogador1 == 3 &&(jogador2 == 4||jogador2 == 1))
    {
        printf("A\n");
        return 0;
    }
    else if (jogador1 == 3 &&(jogador2 == 2||jogador2 == 0))
    {
        printf("B\n");
        return 0;
    }
    //spock
    if (jogador1 == 4 &&(jogador2 == 2||jogador2 == 0))
    {
        printf("A\n");
        return 0;
    }
    else if (jogador1 == 4 &&(jogador2 == 1||jogador2 == 3))
    {
        printf("B\n");
        return 0;
    }

    return 0;
}