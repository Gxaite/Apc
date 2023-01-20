#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int testes,tamanhoStr = 0,quantidadeO = 0;
    
    while(fgets(str,100,stdin)!= NULL)
    {
        tamanhoStr = strlen(str);
        
        for (int j = 0;j<=tamanhoStr;j++)
        {
            if(str[j]=='o')
            {
                quantidadeO ++;
            }
            
        }
    }
    
    printf("%d\n",quantidadeO);
    return 0;
}