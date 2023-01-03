#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    int vetor[n],segundoVetor[n];
    
    for (int i =0 ;i<n;i++)
    {
        scanf("%d",&vetor[i]);
    }
    for (int i =0 ;i<n;i++)
    {
        scanf("%d",&segundoVetor[i]);
    }

    for(int i =0; i<n;i++)
    {
        printf("%d ",vetor[i]+segundoVetor[i]);
        
    }
    printf("\n");
    return 0;
}