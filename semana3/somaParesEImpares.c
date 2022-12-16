#include <stdio.h>
/*\*/

int main()
{
    int numeroLido;
    int somaPares =0;
    int somaImpar = 0;
    

    for (int i = 0; ; i++)
    {
        scanf("%d", &numeroLido);

        if(numeroLido%2==0)
        {
            somaPares += numeroLido;
        }
        if(numeroLido%2==1)
        {
            somaImpar += numeroLido;
        }
        if(numeroLido == 0)
        {
            printf("%d %d\n",somaPares,somaImpar);
            return 0;
        }

    }
}