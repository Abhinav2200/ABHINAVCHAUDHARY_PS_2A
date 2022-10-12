#include<stdio.h>
#include<math.h>
void main()
{
    char i,j,c;
    for (i='A';i<='D';i++)
    {
c=i;
        for(j='A';j<=i;j++)

        {
            printf("%c",c);
c++;
        }

        printf("\n");
    }
}


