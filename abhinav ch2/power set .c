//ABHINAV CHAUDHARY
//2100320130007
#include<stdio.h>
void main(){
 int a[100],b[100],c[200],i,j,m,n;
  printf("Enter no. of elements in a = ");
 scanf("%d",&m);
 printf("Enter elements in a =");
 for(i=0;i<m;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter no. of elements in b = ");
 scanf("%d",&n);
 printf("Enter elements in b =");
 for(i=0;i<n;i++)
 {
 scanf("%d",&b[i]);
 }
 printf("CARTESIAN PRODUCT=");
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 {
 printf("(%d,%d)\n",a[i],b[j]);
 }
 }
}
