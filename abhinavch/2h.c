#include<stdio.h>
#include<math.h>
void main()
{


 int i,j,c;
    for (i=1;i<=4;i++)
    {

        for(j=1;j<=4-i;j++)

        {
            printf(" ");

        }
  for(c=1;c <=2*i-1;c++)
    {
            printf("*");

        }
        printf("\n");
    }
}

