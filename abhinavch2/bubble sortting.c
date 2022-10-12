//ABHINAV CHAUDHARY
//2100320130007
#include<stdio.h>
void main()
{
    int i,j,n,a[10],sto;
    printf("ENTER NO. OF ELEMENTS ");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);   //input elements
    }
        for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-1-i;j++)
     {
         if(a[j]>a[j+1])
        {
          sto=a[j];
          a[j]=a[j+1];
          a[j+1]=sto;
        }
      }
    }
    printf("SORTED ARRAY:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
