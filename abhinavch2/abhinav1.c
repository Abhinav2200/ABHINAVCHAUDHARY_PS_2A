#include<stdio.h>
#include<math.h>
int main()
{

int a,b,c;
printf("ENTER THE THREE INTEGERS");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
{
    if(a>c)
        printf("A IS GREATEST");
    else
        printf("C IS GREATEST");

}
else {

    if(b>c)
      printf("B IS GREATEST");
    else
        printf("C IS GREATEST");
}
 }
