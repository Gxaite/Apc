#include <stdio.h>
int main()
{
    int valor_inserido,valor_produto,troco_total,quantidade_troco500,quantidade_troco100,quantidade_troco50,quantidade_troco10,quantidade_troco5,quantidade_troco1;

    scanf("%d",&valor_produto);

    scanf("%d",&valor_inserido);

    troco_total = valor_inserido- valor_produto;

    quantidade_troco500 =troco_total/500;
    troco_total %=500;
    printf("%d\n",quantidade_troco500);

    quantidade_troco100 = troco_total /100;
    troco_total %= 100;
    printf("%d\n",quantidade_troco100);

    quantidade_troco50 = troco_total/50;
    troco_total %= 50;
    printf("%d\n",quantidade_troco50);

    quantidade_troco10 = troco_total/10;
    troco_total %= 10;
    printf("%d\n",quantidade_troco10);

    quantidade_troco5= troco_total/5;
    troco_total %= 5;
    printf("%d\n",quantidade_troco5);

    quantidade_troco1= troco_total/1;
    printf("%d\n",quantidade_troco1);

    return 0;
}