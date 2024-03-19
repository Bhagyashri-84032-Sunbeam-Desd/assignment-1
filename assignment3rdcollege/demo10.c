/*for loop ==Write a program to print table of given number.*/


#include<stdio.h>
int main()
{
int num,i;
printf("enter the number\n");
scanf("%d",&num);

printf("table of %d\n",num);

for(int i=1;i<=10;i++)
{
printf("%d*%d=%d\n",num,i,(num*i));
}



return 0;
}
