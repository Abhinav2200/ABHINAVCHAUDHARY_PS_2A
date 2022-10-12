#include<stdio.h>
#include<math.h>
void main()
{
    char i,j,c;
    for (i='E';i>='A';i--)
    {
c=i;
        for(j='E';j>=i;j--)

        {
            printf("%c",c);
c++;
        }

        printf("\n");
    }
}


