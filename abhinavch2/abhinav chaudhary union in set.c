#include<stdio.h>
void main()
{
    int o,m,n,a[100],b[100],c[200],i,j;
    printf("ENTER THE FIRST ARRAY SIZE   :");
    scanf("%d",&m);
    printf("ENTER THE FIRST ARRAY ELEMENT:");
    for (i=0;i<m;i++)
        {
    scanf("%d",&a[i]);
         }
    printf("ENTER THE SEC0ND ARRAY SIZE  :");
    scanf("%d",&n);
    printf("ENTER THE second ARRAY ELEMENT:");
     for (i=0;i<n;i++)
    {
     scanf("%d",&b[i]);
    }
    for (i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    o=0;
    for (i=0;i<n;i++)
     {
    int k=0;
    int flag=0;
    for(j=0;j<m;j++)
    {
      if(b[i]==a[j])
    {
          continue;
      }
    else
    {
     flag+=1;

    }
    }
    if(flag==n)
        {
         c[n+o]=b[i];
         o+=1;
    }
}
  printf("THE ARRAY ELEMENT IN UNION  :");
     for (i=0;i<n+o;i++)
        {
    printf("%d",c[i]);
    }
}
//ABHINAV CHAUDHARY
