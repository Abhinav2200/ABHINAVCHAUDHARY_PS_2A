#include<stdio.h>

void main()
{

    int i,j,n;
    printf("ENTER THE VALUE OF  n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=i;j++)
        {
        printf("*");
        }
         printf(" ");
    }

}


