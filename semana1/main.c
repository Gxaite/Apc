#include <stdio.h>
int main()
 {
   float prova1, prova2, prova3,trabalho,lista1,lista2,lista3,lista4,lista5,medialistas,mediafinal;

   scanf("%f", &prova1);
    
   scanf("%f", &prova2);

   scanf("%f", &prova3);
 
   scanf("%f", &trabalho);

   scanf("%f", &lista1);

   scanf("%f",&lista2);

   scanf("%f", &lista3);

   scanf("%f", &lista4);

   scanf("%f", &lista5);

   medialistas = (lista1 +lista2 + lista3 + lista4 + lista5)/10;

   mediafinal = (((prova1)+(2*prova2)+(3*prova3)+(2*trabalho))/8)+medialistas;

   printf("%.2f \n",mediafinal);

   return 0;
 }