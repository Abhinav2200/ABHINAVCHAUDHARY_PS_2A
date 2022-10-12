#include<stdio.h>
#include<math.h>
void main()
{
    float n,m;float sum=0,k=1;
    int i, j=1;
    printf("ENTER THE VALUE OF N IN THE SERIES :");
    scanf("%f",&n);
    for(i=1;i<=2*n-1;i++)
    {
        k=k*i;
       if(i%2==0)
       {
        continue ;
        }
        else
        {
        m=pow(-1,j);
        sum=sum+(m*j)/k;
        j+=1;
        }

    }
    printf("SUM=%f",sum);
}

