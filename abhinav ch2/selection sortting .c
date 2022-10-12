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
for(i=0;i<n-1;i++)
{
min=a[i];
u=i;
for(j=i+1;j<n;j++)
{
    if(a[j]<min)
    {
        min=a[j];
        u=j;
    }}
    sto=a[i];
    a[i]=a[u];
    a[u]=sto;
}
printf("ENTER THE SORTED ARRAY :");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}


}
