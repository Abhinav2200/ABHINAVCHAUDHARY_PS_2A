//ABHINAV CHAUDHARY
//2100320130007
#include<stdio.h>
void main()
{
    int i,j,n,a[10],sto,u,min;
    printf("ENTER NO. OF ELEMENTS ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);   //input elements
    }
for(i=1;i<n;i++)
{
    j=i;
    while(j>0&&a[j-1]>a[j])
    {
        sto=a[j];
        a[j]=a[j-1];
        a[j-1]=sto
        ;
        j--; }
}
printf("SORTED ELEMENTS:");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}
