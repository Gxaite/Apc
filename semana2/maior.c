#include <stdio.h>
 
int main()
{
    int base,topo,metadeAreaTotal;
    float area;
 
    scanf("%d %d",&base,&topo);

    area = ((base+topo)*70)/2;
    metadeAreaTotal = (160*70)/2;

    if (area>metadeAreaTotal)
    {
        printf("1\n");
    }
    else if(area<metadeAreaTotal)
    {
        printf("2\n");
    }
    else
    {
        printf("0\n");   
    }
}