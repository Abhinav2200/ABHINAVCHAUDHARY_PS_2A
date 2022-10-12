#include<stdio.h>
#include<math.h>
void main()
{
    float n,x,m;float sum=1,k=1;
    int i, j=1;
    printf("ENTER THE VALUE OF X AND N IN THE SERIES :");
    scanf("%f%f",&x,&n);
    for(i=1;i<=2*n-1;i++)
    {
        k=k*i;
       if(i%2==0)
       {
        m=pow(-1,j);
        sum=sum+((m*pow(x,i))/k);
        j+=1;
        }
        else
        {
        continue ;
        }

    }
    printf("SUM=%f",sum);
}


