#include <stdio.h>
 
int main()
{
    int n,menor,posicaoMenor;
    scanf("%d",&n);
    int vetor[n];
    
    for (int i =0 ;i<n;i++)
    {
        scanf("%d",&vetor[i]);
    }
    menor = 1000000;
    
    
    for(int i =0; i<n;i++)
    {
        if(vetor[i]<menor)
        {
            menor = vetor[i];
            posicaoMenor = i;
        }
        
    }
    
    printf("%d\n",menor);
 
    return 0;
}