#include<stdio.h>
#include<math.h>
int main()
{
   float a,b,c;
   printf("ENTER THE VALUES THE SIDES OF TRIANGLE ");
   scanf("%d%d%d",&a,&b,&c);
   if (a==b&&b==c&&c==a)
   printf("TRIANGLE is equilateral");
 else  if (a==b||b==c||c==a)
   printf("TRIANGLE is isosceles");
   else
   printf("TRIANGLE is scalene");
}
