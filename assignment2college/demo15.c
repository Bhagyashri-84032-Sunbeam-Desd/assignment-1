/* Write a program to display number of days in the given month and year using switch case statement.*/

#include<stdio.h>
int main()
{

int month, num;

printf("enter month no:");
scanf("%d",&num);


switch(num)
{
case 1: if(num==1);
      printf("31 days with january");
	  break;
case 3:
     printf("31 days");
	 break;

case 5:
      printf("31 days");
	  break;
case 7:
     printf("31 days");
	 break;
case 8: 
     printf ("31 days");
	 break;
case 10:
     printf("31 days");
	 break;
case 12:
      printf("no of days are 31");
	  break;
case 4:
      printf("30 days");
	  break;
case 6:
printf("30 days");
      break;
case 9:
      printf("30 days");
	  break;
case 11:
printf("no of days are 30");
      break;

case 2:
printf("no of days are 28/29");
      break;
default:
printf("invalid opt");
}
return 0;
}



