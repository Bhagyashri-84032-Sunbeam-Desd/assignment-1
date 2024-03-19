/* Q3 Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20*/

#include<stdio.h>
int main()
{
int n,sum=0,m;
printf("enter the number:");
scanf("%d",&n);
while(n>0)
{
m=n%10;
sum=m+sum;
n=n/10;
}
printf("sum is=%d",sum);

return 0;
}


