#include <stdio.h>
 
int main()
{
    int n;
    int media = 0,soma = 0,contadorMedia= 0;
    
    scanf("%d",&n);
    int vetor[n];

    for(int i =0; i<n;i++)
    {
        scanf("%d",&vetor[i]);
    }

    for(int i =0; i<n;i++)
    {
        soma += vetor[i];
    }
    media = soma/n;
    
    for(int i = 0; i<n;i++)
    {
        if(vetor[i]>media)
        {
            printf("%d ",vetor[i]);
            contadorMedia +=1;
        }
    }
    if(contadorMedia==0)
    {
        printf("0\n");
        return 0;
    }
    printf("\n");
    return 0;
}