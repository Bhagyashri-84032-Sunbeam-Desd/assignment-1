/* Write a program to find maximum of three numbers using
a If – else
b. conditional operator. */



#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("enter a no:",num1,num2,num3);
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>=num2 && num1>=num3)
printf("num1 is larger");
else if(num2>=num1 && num2>=num3)
printf("num2 is larger");
else
printf("num3 is larger");





return 0;
}

/* b.condiotional operator using ternary operator:*/
