#include <stdio.h>
int main()
{
    double media_ponderada,elemento1,elemento2,resultado2;
    int peso1,peso2, soma_pesos;

    scanf("%lf",&media_ponderada);

    scanf("%lf",&elemento2);

    scanf("%d",&peso1);

    scanf("%d", &peso2);

    soma_pesos = peso1+peso2;
    resultado2 = peso2*elemento2;

    elemento1 = ((media_ponderada*soma_pesos)-resultado2)/peso1;

    printf("%.6lf\n",elemento1);
    
    return 0;
}