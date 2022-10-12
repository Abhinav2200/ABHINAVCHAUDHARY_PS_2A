//ABHINAV CHAUDHARY
//2100320130007#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("ENTER THE VALUE IN MATRIX A ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
     printf("TRANSPOSE IN MATRIX");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
            printf("\n%d",b[i][j]);
        }
        printf("\n");
    }

}
