/* Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.*/


#include<stdio.h>
int main()
{

float num1,num2;
printf("enter the numbers:",num1,num2);
scanf("%f%f",&num1,&num2);
float div = (num1/num2);
printf("div of num1 and num2 is %f",div);
if(num1/0)
printf("invalid");




return 0;
}

