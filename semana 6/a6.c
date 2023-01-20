#include <stdio.h>
int faz_conta_direito(int parcelas, char op)
{
    int resultado = 0,numero_lido = 0 ;
    scanf ("%d",&resultado);
 
    for (int i = 0;i<parcelas-1;i++)
    {
        scanf("%d",&numero_lido);
 
        if (op == '+')
        {
            resultado+= numero_lido;
 
        }
        else
        {
            resultado-=numero_lido;       
        }
    }
 
    return resultado;
}