//ABHINAV CHAUDHARY
//2100320130007
#include<stdio.h>
void main()
{
    int a[150],n,i,num,j, l;
    l=0;
    printf("ENTER THE ELEMENTS ");
    scanf("%d",&n);
    printf("ELEMENTS ARE ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER TO BE SEARCHED ");
    scanf("%d",&num);
    for( i=0;i<n;i++)
    {
    if(a[i]==num)

    {
    l=1;
    j=i+1;
    }
    }
    if(l==1)
        printf("Element is found at location :%d",j);
    else
        printf("Element is not found");

}

