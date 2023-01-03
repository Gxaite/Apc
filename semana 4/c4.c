#include <stdio.h>
 
int main()
{
    int n,primeiroMenor;
    scanf("%d",&n);
    int vetor[n];
    
    for (int i =0 ;i<n;i++)
    {
        scanf("%d",&vetor[i]);
    }

    
    for(int i =0; i<n;i++)
    {
        if(vetor[i]%2==0)
        {
            printf("%d ",vetor[i]);
        }
        
    }
    printf("\n");

    for(int i =0; i<n;i++)
    {
        if(vetor[i]%2!=0)
        {
           printf("%d ",vetor[i]);
        }
        
    }
    printf("\n");
    return 0;
}