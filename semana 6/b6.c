#include <stdio.h>
 
int validaPeso( double pesoKg)
{
    if(pesoKg<0)
    {
        return 0;    
    }
    else
    {
        return 1;
    }
 
}
void fazTonelada(double pesoKg)
{
    double resultadoTonelada = pesoKg/1000;
    printf("%.4lf\n",resultadoTonelada);
}
void fazGrama(double pesoKg)
{
    double resultadoGrama = pesoKg *1000;
    printf("%.4lf\n",resultadoGrama);
}