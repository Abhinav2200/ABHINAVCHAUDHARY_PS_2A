#include<stdio.h>
#include<math.h>
void main()
{
int d,m,y ,b[13],a,j;
int sum =0;
printf("ENTER THE DAY/MONTH/YEAR starting from 2001");
scanf("%d%d%d",&d,&m,&y);
b[0]=0;
b[1]=31;
b[2]=28;
b[3]=31;
b[4]=30;
b[5]=31;
b[6]=30;
b[7] =31;
b[8]=31;
b[9]=30;
b[10]=31;
b[11]=30;
b[12]=31;
if (((y%4==0)&&(y%100!=0))||(y%400==0))
    b[2]=29;
while(m>0)
      {
          sum=sum+b[m-1];
            m=m-1;
      }
a=y-2001;
j=365*a+a/4+(d-1)+sum;
while(j>6)
    j=j-7;
if(j==0)
    {
   printf("monday");
}
if(j==1)
    {
   printf("tuesday");
}
if(j==2)
    {
   printf("wednesday");
}
if(j==3)
    {
   printf("thursday");
}
if(j==4)
    {
   printf("friday");
}
if(j==5)
    {
   printf("saturday");
}
if(j==6)
    {
   printf("sunday");
}
}
