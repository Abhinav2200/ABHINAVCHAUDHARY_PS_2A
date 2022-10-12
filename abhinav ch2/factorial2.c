#include<stdio.h>
void main()
{
    int i,k=1, sum=0,n;
    printf("ENTER THE SUM OF FACTORIAL UPTO N:  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=k*i;
        sum=sum+k/i;
    }
printf("SUM OF SERIES OF FACTORIAL :%d",sum);
}
