#include <stdio.h>
#include <math.h>

int ePar(long double num)
{
    return ((int)num % 2 == 0) ? 1 : 0;
}

int main() 

{
    
    long double tempo, linhaDoTempo;
    int golpes;
    
    scanf("%Lf %d", &tempo, &golpes);
    linhaDoTempo = tempo;

    for (int i = 0; i < golpes; i++) {
        if (ePar(tempo))
        { 
            linhaDoTempo = (int)sqrt(tempo) - 1;
            printf("%.Lf\n", linhaDoTempo*linhaDoTempo);
        } else
        {
            linhaDoTempo = (int)(2 * sqrt(tempo)) - 1;
            printf("%.Lf\n", linhaDoTempo * linhaDoTempo);
        }
        
        if (i == golpes-1)
        {
            tempo = linhaDoTempo;
        } else 
        {
            tempo = linhaDoTempo * linhaDoTempo;
        }
    }

    return 0;
}
