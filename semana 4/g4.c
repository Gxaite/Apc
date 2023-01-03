#include <stdio.h>
 
int main()
{
    int n;
    int verificador = 0;
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
        if(vetor[i]==segundoVetor[i])
        {
            verificador += 1;
        }
        
    }
    if(verificador == n)
    {
        printf("sim\n");
        return 0;
    }
    printf("nao\n");
    return 0;
}