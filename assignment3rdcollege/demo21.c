i/* Q.21 a]. 
*
* *
* * *
* * * *
* * * * * */


#include<stdio.h>
int main()
{
int num;
printf("enter the num of rows");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
for(int j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
return 0;
}