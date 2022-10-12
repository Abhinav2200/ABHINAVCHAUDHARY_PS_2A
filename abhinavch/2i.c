#include<stdio.h>
#include<math.h>
void main()
{
 int i,j,c;
    for (i=3;i>=1;i--)
    {

        for(j=1;j<=3-i;j++)

        {
            printf(" ");

        }
  for(c=1;c <=2*i-1;c++)
    {
            printf("*");

        }
        printf("\n");
    }
    for (i=2;i<=3;i++)
    {

        for(j=1;j<=3-i;j++)

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


