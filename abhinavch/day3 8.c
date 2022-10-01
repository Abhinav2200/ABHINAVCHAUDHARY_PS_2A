#include<stdio.h>
#include<math.h>
void main()
{
    int n,i;int sum=0;
    printf("ENTER THE VALUE OF N IN THE SERIES :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {


        sum=sum+i*(i+1)*(i+2);
    }
    printf("SUM=%d",sum);
}
