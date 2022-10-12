//ABHINAV CHAUDHARY
//2100320130007
#include<stdio.h>
void main()
{
    int a[150],n,i,num,j,first,last,mid,loc=0;
    printf("ENTER NO. OF ELEMENTS ");
    scanf("%d",&n);
    printf("ENTER ELEMENTS IN ASCENDING ORDER ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER TO BE SEARCHED ");
    scanf("%d",&num);
     first=0;
     last=n-1;
     mid=(first+last)/2;
   while(first<=last)
    {
    if(a[mid]<num)
        first=mid+1;
    else if(a[mid]==num)
    {
        loc=mid;
        break ;
    }
    else
    {
    last =mid-1;
    }
    mid=(first+last)/2;

}
    if(loc==0)
    printf("THE ELEMENT IS NOT FOUND");
    else
 printf("THE ELEMENT IS %d AT LOCATION %d",num,loc+1);
}
