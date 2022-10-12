#include<stdio.h>
void main()
{
    int i,j,k,l,c,n;
    printf("ENTER THE ROW IN TREE :");
    scanf("%d",&n);
    c=n;
            if(c==n){
        for(int b=1;b<=2*n-1;b++){
            if(b<=n)
                printf("%d",b);
            else{c=c-1;
                printf("%d",c);}
        }
        printf("\n");
       }
 for(i=n-1;i>=1;i--)
    {


               for(k=1;k<=i;k++)
        {
            printf("%d",k);
       }
        for(j=1;j<=n-i;j++)
            {
                printf(" ");
        }
          for(j=n-2;j>=i;j--)
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

