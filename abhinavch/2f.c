#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,c;
    for (i=1;i<=8;i=i+2)
    {
                for(j=1;j<=i;j++)  // in second iteration i=3 so print 3*

        {
            printf("*");
        }

        printf("\n");
    }
}
