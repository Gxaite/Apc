#include <stdio.h>
/*\*/

int main()
{
    int n;
    scanf("%d",&n);
    //PRIMEIRA PIRAMIDE
    for (int i =1;i<=n;i++)
    {
      for (int j =1;j<i;j++)
      {
        if(i<10)
        {
            printf("0%d ",i);
        }
        else
        {
            printf("%d ",i);
        }
      } 

      if(i<10)
        {
            printf("0%d\n",i);
        }
        else 
        {
            printf("%d\n",i);
        }
    }
    printf("\n");

    //SEGUNDA PIRAMIDE
    for (int i =1;i<=n;i++)
    {
      for (int j =1;j<i;j++)
      {
        if(j<10)
        {
            printf("0%d ",j);
        }
        else
        {
            printf("%d ",j);
        }
      } 

      if(i<10)
        {
            printf("0%d\n",i);
        }
        else 
        {
            printf("%d\n",i);
        }
    }
    return 0;
    
}