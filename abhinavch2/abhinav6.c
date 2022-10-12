#include<stdio.h>
#include<math.h>
void main()
{
int temp ;
printf("ENTER THE TEMPERATURE IN CENTIGRADE");
scanf("%d",&temp);
if (temp<0)
printf("TEMP. IS FREEZING WHEATHER");
else if (temp <10)
printf("TEMP. IS VERY COLD WHEATHER");
 else if (temp<20)
printf("TEMP. IS COLD WHEATHER");
 else if (temp <30)
printf("TEMP. IS NORMAL");

else if (temp<40)
printf("TEMP. IS HOT");

else
printf("TEMP. IS VERY HOT");
}
