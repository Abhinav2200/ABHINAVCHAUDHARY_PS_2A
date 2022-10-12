#include<stdio.h>
void main()
{
    int i,j,k,l,n;
    printf("ENTER THE ELEMENTS IN TREE :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
            {
                printf(" ");
        }
       for(k=1;k<=i;k++)
        {
            printf("%d",i+k-1);
       }

       for(l=i;l>=2;l--)
       {
         printf("%d",i+l-2);
       }

       printf("\n");
    }

}
