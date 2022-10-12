#include<stdio.h>
#include<math.h>
void main()
{
    float n,x,i;float sum=1,k=1;
    printf("ENTER THE VALUE OF X AND N IN THE SERIES :");
    scanf("%f%f",&x,&n);
    for(i=1;i<=n;i++)
    {
        k=k*i;

        sum=sum+pow(x,i)/k;
    }
    printf("SUM=%f",sum);
}
