/* Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
reversed number is same as entered number it is called palindrome).*/



#include<stdio.h>
int main()
{

int num,rem= 1,sum= 0,rev = 0;
	
	printf("Enter the number  :");
	scanf("%d",&num);
	int temp = num ;
while( num != 0  )
	{
		rem = num % 10;
		rev = rev * 10 + rem ;
		num = num / 10;
	}
	printf("Rev = %d \n",rev);
	if(temp == rev )
	{
		printf("Palindrome  \n");
	}
	else
	{
		printf("Not palindrome \n");
	}
return 0;
}
