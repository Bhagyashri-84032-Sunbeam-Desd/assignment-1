/* Write a program to print the tables of the numbers from 1 to 10. */

#include<stdio.h>
int main()
{
int num;
printf("enter an num:");
scanf("%d",&num);
for(int i=1;i<=10;i++)
{

for(int j;j<=10;j++)
{
printf("%3d\t",(num*j));
}
printf("%d*%d\n",(num*i));
}





return 0;
}
