#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
     printf("ENTER the ABSICCA and ORDINATE in the x and y plane ");
   scanf("%f%f",&x,&y);
    if (x==0&&y==0)
   printf("POINT is ORIGIN");
 else  if (x>0&&y>0)
  printf("POINT is in first quadrant");
   else if (x<0&&y>0)
   printf("POINT is in second quadrant");
  else if(x<0&&y<0)
   printf("POINT is in third quadrant");
  else
   printf("POINT is in fourth quadrant");

}
