/* Write a program to display number of days in the given month and year using
a. Using If else ladder.
b. Using logical operators.*/


/*a */

#include<stdio.h>
int main()
{
int month;
int year;

printf("enter no of month\n:");
scanf("%d",&month);

printf("enter no of year\n");
scanf("%d",&year);

 if(((year%400==0)&&(year%4==0)||(year%100!=0)))
  {
   printf("%d :: is a leap year with 366 days\n",year);
}
else if(year%100==0)
{
printf("not a leap year %d",year);
}

if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
{
printf("days are 31");
}

else if(month==4 || month==6 || month==8 || month==11 )
{
printf("days are 30");
}

else if(year%400==0 && year%4==0 || year%100!=0)
if(month==2)
{
printf("days are 28");}

else
printf("days are 29");

     
return 0;
}

