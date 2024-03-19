/*Q9] Write a program to accept two numbers and find its GCD (greatest common divisor) using
  Euclidean algorithm. The following example explains the algorithm. GCD of 123 and 36 is 3*/


#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter num1");
	scanf("%d",&num1);

	printf("enter num2");
	scanf("%d",&num2);

    while(num2>0)
    {
    int n=num1%num2;
	 num1=num2;
	 num2=n;
	 printf("GCD=%d\n",num1);

	}

}
