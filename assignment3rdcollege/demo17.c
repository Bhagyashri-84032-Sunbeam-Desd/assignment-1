/*Print following pattern
* * * * *
* * * * *
* * * * *
* * * * *
* * * * * */


#include<stdio.h>
int main()
{
int arr[5][5];
//printf("enter character");
//scanf("%*c",*);

for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
