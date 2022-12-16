#include <stdio.h>

int main()
{
    int n,soma,numeroLido;

    scanf("%d",&n);
    

    for (int i = 0; i<n; i++)
    {
        scanf("%d", &numeroLido);

        soma += numeroLido;

    }

    printf("%d\n",soma);
    return 0;
}