#include<stdio.h>
#include<math.h>
void main()
{
    int year;
    printf("ENTER THE YEAR");
    scanf("%d",&year);
    ((year%100!=0&&year%4==0)||year%400==0)?printf("ENTER YEAR IS LEAP YEAR"):printf("ENTER IS NOT LEAP YEAR");

}
