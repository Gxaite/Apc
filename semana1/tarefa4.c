#include <stdio.h>
int main()
{
    long int hora,minuto,segundo;
    
    scanf("%ld",&hora);

    minuto = hora * 60;
    segundo = hora * 3600;

    printf("%ld \n%ld \n",minuto,segundo);

    return 0;
}