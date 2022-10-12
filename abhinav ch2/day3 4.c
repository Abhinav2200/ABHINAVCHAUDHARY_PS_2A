#include<stdio.h>
#include<math.h>
void main()
{
    int n,x,i;float sum=1,k=1;
    printf("ENTER THE VALUE OF X AND N IN THE SERIES :");
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        k=k*i;
       if (i%2==0)
        sum=sum+pow(x,i)/k;
        else
        sum=sum-pow(x,i)/k;
    }
    printf("SUM=%f",sum);
}

