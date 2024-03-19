/*q.3 b)Reverse the number
Input: 9362
Output: 2639*/


#include<stdio.h>
int main()
{
int rem,num,rvs=0;
printf("enter the number");
scanf("%d",&num);

while(num>0)
{
rem= num%10;
rvs=rvs*10+rem;
num=num/10;
}
printf("rvs no is=%d",rvs);

return 0;
}
