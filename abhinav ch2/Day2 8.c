#include<stdio.h>
void main()
{
    int i,j,k,l,c,n;
    printf("ENTER THE ELEMENTS IN TREE :");
    scanf("%d",&n);
    c=n;
    for(i=1;i<=n;i++)
    {
               for(k=1;k<=i;k++)
        {
            printf("%d",k);
       }
        for(j=1;j<=n-i;j++)
            {
                printf(" ");
        }
          for(j=n-1;j>=i;j--)
            {
                printf(" ");
        }

       for(l=i;l>=1;l--)
       {
         printf("%d",l);
       }
       printf("\n");


    }

}
