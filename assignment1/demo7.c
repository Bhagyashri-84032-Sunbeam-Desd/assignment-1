/*Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9
3
6
1
b. 9361 = 9 000 + 300 + 60 + 9
c= 1639 */




#include<stdio.h> 
 
int main(void) 
{ 
	int temp=0,num,r; 
	printf("Enter a number = "); 
	scanf("%d",&num); 
 
		r=num%10;       
		temp=temp*10+r; 
		num=num/10; 
 
		r=num%10; 
		temp=temp*10+r; 
		num=num/10; 
 
		r=num%10; 
		temp=temp*10+r; 
		num=num/10; 
 
		r=num%10; 
		temp=temp*10+r; 
		num=num/10; 
 
	printf("REVERSE N0.= %d",temp); 
    return 0; 
} 
