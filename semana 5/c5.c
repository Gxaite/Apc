#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int testes,tamanhoStr,maiorStr = 0;
    scanf("%d",&testes); 
    
    for(int i = 0; i<testes;i++)
    {
        scanf("%s",str);
        tamanhoStr = strlen(str);
        if(tamanhoStr>=maiorStr)
        {
            maiorStr = tamanhoStr;
        }
    }
    
    printf("%d\n",maiorStr);
    
    
    
    return 0;
}