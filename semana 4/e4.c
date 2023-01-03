#include <stdio.h>
 
int main()
{
    int n,numeroLido;
    scanf("%d",&n);
    int vetor[n];
    
    for (int i =0 ;i<n;i++)
    {
        scanf("%d",&vetor[i]);
    }

    scanf("%d",numeroLido);
    for(int i =0; i<n;i++)
    {
        if(vetor[i]==numerolido)
        {
            printf("pertence\n");
            return 0;
        }
        
    }

    printf("nao pertence\n");
    return 0;
}