#include <stdio.h>

int main()
{
    int tamanhoStr, testes;
    scanf("%d", &testes);
    getchar();
    
    for (int j = 0; j <testes; j++)
    {
        char str[1002];
        fgets(str, 1002, stdin);
        
        for (int i = 0; str[i]!= '\0'; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                if (str[i] <= 'M')
                {
                    str[i] += 13;
                }
                else
                {
                    str[i] -= 13;
                }
            }
            
            printf("%c", str[i]);
        }
        
        printf("\n");
    }
    
    return 0;
}
