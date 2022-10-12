//ABHINAV CHAUDHARY
//2100320130007
#include<stdio.h>
void main()
{
    int a[100],max,i;
    printf("ENTER THE VALUE IN SET A : ");

    for(i=0;i<3;i++)
{
        scanf("%d",&a[i]);
}
        max=a[0];
        for(i=0;i<3;i++)
{
            if(a[i]>max)
                max=a[i];
}
printf("MAXIMUM NUMBER: %d",max);
}
