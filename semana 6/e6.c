#include <stdio.h>
int contarEstrelas(int qtd, int abertura)
{
    int resultado =0,fotonsCaptados = 0;
    
    for (int i = 0; i<qtd;i++)
    {
        scanf("%d",&fotonsCaptados);
        fotonsCaptados *= abertura;
        if(fotonsCaptados>=40000000)
        {
            resultado ++;
        }
        
    }
    
    return resultado;
}