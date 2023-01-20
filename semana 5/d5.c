#include <string.h>
#include <stdio.h>
#include <ctype.h>
 
int main()
{
    char str[102];
    int comecoStr = 0;
 
    fgets(str,102,stdin);
 
    int tamanhoStr = strlen(str)-1;
 
    for (int i = 0;str[i] != ' ';i++)
    {
        printf("%c", tolower(str[i]));
    }
    printf(".");
 
    for(int i = tamanhoStr;str[i]!= ' ';i--)
    {
        comecoStr = i;
    }
    for (int i = comecoStr;str[i]!='\n';i++)
    {
        printf("%c", tolower(str[i]));
    }
 
    printf("@unb.br\n");
 
    return 0;
}