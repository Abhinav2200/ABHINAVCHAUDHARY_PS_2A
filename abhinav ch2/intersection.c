#include<stdio.h>
void main()
{
    int o=0,m,n,a[100],b[100],c[100],i,j;
     printf("ENTER THE FIRST ARRAY SIZE :");
     scanf("%d",&m);
     printf("ENTER THE FIRST ARRAY ELEMENT :");
     for (i=0;i<m;i++)
        {
    scanf("%d",&a[i]);
    }
     printf("ENTER THE SEC0ND ARRAY SIZE   :");
     scanf("%d",&n);
     printf("ENTER THE second ARRAY ELEMENT :");
     for (i=0;i<n;i++)
    {
    scanf("%d",&b[i]);
    }
    for (i=0;i<m;i++)
    {
    for (j=0;j<n;j++)
    {
      if(a[i]==b[j])
      {
          c[o]=b[j];o++;

      }
    }
    }
  printf("THE ARRAY ELEMENT IN INTERSECTION:");
     for (i=0;i<o;i++)
        {
    printf("%d",c[i]);
    }
}
