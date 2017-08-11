#include<stdio.h>
int main()
{
int start,end,k;
printf("enter the starting and ending numbers between to find the odd series");
scanf("%d%d",&start,&end);
for(k=start;k<=end;i++)
{
if(k%2!=0)
printf("\n %d",k);
}
printf("the above is the odd series");
return 0;
}
