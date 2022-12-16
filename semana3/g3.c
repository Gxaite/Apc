#include <stdio.h>
int main()
{
    int linha,coluna;
    scanf("%d %d",&linha,&coluna);

    for (int i=0;i<linha;i++)
    {
        for(int j=0;j<coluna;j++)
        {
            printf("[%03d,%03d]",i,j);
        }

    printf("\n");
    }







    return 0;
}