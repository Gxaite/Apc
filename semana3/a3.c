#include <stdio.h>
int main()
{
    int contador;
    scanf("%d",&contador);
    for (int i =1; i<=contador;i++)
    {
        if (i%2==1)
        {
            printf("THUMS THUMS THUMS\n");
        }
        else
        {
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        }

    }


    return 0;
}