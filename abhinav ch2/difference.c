//ABHINAV CHAUDHARY
//2100320130007
#include<stdio.h>
void main()
{
int a[100],b[100],c[100],m,n,i,j,found=0,p=0;
printf("Enter size of set A=");
scanf("%d",&m);
printf("Enter size of set B=");
scanf("%d",&n);
printf("Enter elements of set A=");
for(i=0;i<m;i++)
{
 scanf("%d",&a[i]);
}
printf("Enter elements of set B=");
for(i=0;i<n;i++)
{
 scanf("%d",&b[i]);
}
for(i=0;i<m;i++)
{
 for(j=0;j<n;j++)
 {
 if(a[i]==b[j])
 found=1;
 }
 if(found==0)
 {
 c[p]=a[i];
 p++;
 }
found=0;
}
printf("DIFFERENCE=");
for(i=0;i<p;i++)
{
 printf("%d ",c[i]);
}
}
