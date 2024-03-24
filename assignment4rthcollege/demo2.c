/*Write a function to implement four function calculator. Function would take operands and
operator as arguments and returns result.  */


#include<stdio.h>
//fun declaration
int addition(int ,int);
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);

int main()
{
int op;
do
{
printf("select an operation to performed\n:");
printf("\n1 Addition\n 2 Subtraction\n 3 Multiplication\n 4 Division\n");
scanf("%d",&op);

switch(op)
{
case 1:
      addition();
	  break;
case 2:
      subtraction();
	  break;
case 3:
      multiplication();
	  break;
case 4:
      Division();
	  break;
default:
       printf("invalid\n");

}while(op!=4);

return 0;
}
int addition()
{
int n1,n2,res;
printf("enter num1 and num2:");
scanf("%d %d",&n1&n2);
res=n1+n2;
printf:("addition %d=%d+%d",res,n1,n2);
}

int subtraction(int n1,int n2)
{
int n1,n2,res;
printf("enter n1 and n2:");
scanf("%d%d",&n1,&n2);
res=n1-n2;
printf("sub of %d=%d-%d",res,n1,n2);
}

int multiplication(int n1,int n2)
{
int n1,n2;
printf("enter n1 and n2");
scanf("%d%d",&n1,&n2);
res=n1*n2;
printf("mul of %d=%d*%d",res,n1,n2);
}

int division(int n1,int n2)
{
int n1,n2;
printf("enter n1 and n2");
scanf("%d%d",&n1,&n2);
res=n1/n2;
printf("division of %d=%d/%d",res,n1,n2);
}
