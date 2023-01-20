#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    
    scanf("%s",str);
    int tamanhoStr = strlen(str);
    
    for (int i = tamanhoStr-1; i>=0;i--)
    {
        printf("%c",str[i]);
    }
    
    printf("\n");
    
    
    
    return 0;
}