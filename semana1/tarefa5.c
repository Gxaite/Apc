#include <stdio.h>
int main()
{
    int numero_conta,resto,somatorio,digito_verificador;
    somatorio = 0;

    scanf("%d",&numero_conta);

    resto = numero_conta % 10;
    somatorio += resto *2;
    numero_conta /=10;

    resto = numero_conta%10;
    somatorio += resto*3;
    numero_conta /=10;

    resto = numero_conta%10;
    somatorio += resto*4;
    numero_conta /=10;

    resto = numero_conta%10;
    somatorio += resto*5;
    numero_conta /=10;

    resto = numero_conta%10;
    somatorio += resto*6;
    numero_conta /=10;

    resto = numero_conta%10;
    somatorio += resto*7;
    numero_conta /=10;

    resto = somatorio % 11;
    digito_verificador = 11-resto;

    printf("%d\n",digito_verificador);

    return 0;
}