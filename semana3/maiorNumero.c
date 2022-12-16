#include <stdio.h>
int main()
{
    int n,numeroLido;
    int maiorNumero;

    scanf("%d",&n);
    
    scanf("%d", &numeroLido);
    maiorNumero = numeroLido;
    
    for (int i = 0; i<n-1; i++)
    {
        scanf("%d", &numeroLido);

        if(numeroLido>=maiorNumero)
        {
            maiorNumero = numeroLido;
        }

    }

    printf("%d\n",maiorNumero);
    return 0;
}