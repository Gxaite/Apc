#include <string.h>
#include <stdio.h>

int main()
{
    char str [61];
    char strVogais[61];
    char strVogaisInversa[61];
    int j = 0;
    int quantidadeVogais = 0;
     
    fgets(str,sizeof str,stdin);

    int tamanhoStr = strlen(str)-1;
    
    for(int i = 0; i<=tamanhoStr;i++)
    {
        if(str[i]== 'a'|| str[i]== 'e'||str[i]== 'i'||str[i]== 'o'||str[i]== 'u')
        {
            quantidadeVogais ++;
            strVogais[j] = str[i];
            j++;
        }
    }
    
    j=0;
    
    for(int i = tamanhoStr ;i>=0 ;i--)
    {
        if(str[i]== 'a'|| str[i]== 'e'||str[i]== 'i'||str[i]== 'o'||str[i]== 'u')
        {
            strVogaisInversa[j] = str[i];
            j++;
        }
        
    }
    
    if(quantidadeVogais == 0)
    {
        printf("Valor invalido!\n");
        return 0;
    }
    int resposta = strcmp(strVogais,strVogaisInversa);
    
    if (resposta == 0)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    
    return 0;
}