/*Q.2]c. Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome*/

#include<stdio.h>
int main()
{
int temp,rev=0,rem,num;
printf("enter the number:");
scanf("%d",&num);
temp=num;
while(num!=0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(temp==rev)
{
printf("number is palindrome");
}
else printf("not palindrome");





return 0;
}
