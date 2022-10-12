//ABHINAV CHAUDHARY
//2100320130007
#include<stdio.h>
void main()
{
    int a[10],sum,i,avg;  sum=0;
        printf("ENTER THE MARKS :  ");

 for(i=0;i<5;i++)
    {
            scanf("%d",&a[i]);
            sum=sum+a[i];
    }
avg=sum/5;
printf("Average marks of Student : %d",avg);
}


