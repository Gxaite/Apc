#include <math.h>
double exp_natural(int x,int n)
{
    double somatorio = 0; 
    double fatorial =1;
    for (int i=0;i<=n;i++)
    {
        if (i==0)
        {
            somatorio+=1;    
        }
        else
        {
            fatorial *=i;
            somatorio+= pow(x,i)/fatorial;
        }
    }
 
    return somatorio;
}