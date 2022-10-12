#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,c,n;
    printf("ENTER THE NUMBER N : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        c=i;
        for(j=1;j<=i;j++)

        {
            printf("%d ",c);
c++;
        }

        printf("\n");
    }
}

