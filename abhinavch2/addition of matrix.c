#include<stdio.h>
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
     printf("ENTER THE VALUE IN MATRIX B ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)



        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

     printf( "MATRIX ADDITION " );
    for(i=0;i<3;i++)
        {
         for(j=0;j<3;j++)

        {
            c[i][j]= b[i][j]+ a[i][j];
            printf("%d  ",c[i][j]);
        }

        printf("\n");
    }
}


