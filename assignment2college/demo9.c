v/*Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator */


/* a. without using logical operator
#include<stdio.h>
int main()

int year,month;
if(year%4==0)
{
printf("year is leap");
}
else if(year%400==0)
{
printf("year is  leap");
}
else if(year%100!=0)
{
printf("not leap");
}
else
printf("invalid operation");
return 0;
}  */


/* b. using logical operator

#include<stdio.h>
int main()
{
int year;
if(year%4==0 &&  year%400==0)
{
printf("year is a leap");
}
else if(year%100!=0)
printf("year is not leap");
printf();
return 0;
} */

/* c. using conditional operator */

#include<stdio.h>
int main()
int year;
{
if(year%4==0 && year%100!=0) ? printf("LEAP YEAR") : (year%400 ==0 ) ? printf("LEAP YEAR"):printf("common year");
return 0;
}


