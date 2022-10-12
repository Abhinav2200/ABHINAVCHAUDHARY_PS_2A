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
       for(k=i;k>=1;k--)
        {
            printf("%d",k);

       }

       for(l=2;l<=i;l++)
       {
         printf("%d",l);

       }

       printf("\n");
    }

}

