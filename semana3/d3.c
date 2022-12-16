#include <stdio.h>
/*\*/

int main()
{
    int numeroLido;
    int somaPares =0;
    

    for (int i = 0; ; i++)
    {
        scanf("%d", &numeroLido);

        if(numeroLido%2==0)
        {
            somaPares += numeroLido;
        }
        if(numeroLido == 0)
        {
            printf("%d\n",somaPares);
            return 0;
        }

    }
}