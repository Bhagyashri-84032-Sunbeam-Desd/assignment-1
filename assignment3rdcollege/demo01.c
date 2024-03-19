/*Write a program to accept a character and a number, and print the character number times
Input:
Character: *
Number: 6
Output:
 ****** */

#include<stdio.h>
int main()
{
	int n,i=1;
	char c;
	printf("enter an integer:");
	scanf("%d",&n);
	printf("enter character");
	scanf("%*c%c",&c);
	while(i<=n)
	{
		printf("%c",c);
		i++;
	}

	return 0;
}
