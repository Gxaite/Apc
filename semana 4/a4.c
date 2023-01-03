#include <stdio.h>
 
int main()
{
    int n,primeiroMenor, segundoMenor,terceiroMenor;
    scanf("%d",&n);
    int vetor[n];
    
    for (int i =0 ;i<n;i++)
    {
        scanf("%d",&vetor[i]);
    }
    segundoMenor = terceiroMenor = primeiroMenor = 1000000;
    
    
    
    for(int i =0; i<n;i++)
    {
        if(vetor[i]<primeiroMenor)
        {
            primeiroMenor = vetor[i];
        }
        
    }
       
    for(int i =0; i<n;i++)
    {
        if(primeiroMenor<vetor[i] && vetor[i]<segundoMenor)
        {
            segundoMenor = vetor[i];
        }
        
    }
       
    for(int i =0; i<n;i++)
    {
        if(segundoMenor<vetor[i] && vetor[i]<terceiroMenor)
        {
            terceiroMenor = vetor[i];
        }
        
    }
    
    printf("%d\n%d\n",segundoMenor,terceiroMenor);
 
    return 0;
}