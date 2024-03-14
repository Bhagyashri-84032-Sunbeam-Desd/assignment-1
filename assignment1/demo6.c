/*Write a program to accept an integer value and print its table. */

#include<stdio.h>
int main()
{
int num,i;
printf("enter an integer:%d",num);
scanf("%d",&num);
for(i=1;i<=10;++i)
printf("\n %d*%d=%d",num,i,(num*i));
return 0;

}
