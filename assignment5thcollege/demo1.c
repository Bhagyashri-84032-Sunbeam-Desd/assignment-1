/*Q.1] Write a program to accept marks of five subjects, calculate its total and average. */

#include <stdio.h>
int main()
{
    int  marks[5];
	int sum;
    float  average;

    printf("Enter marks of first subject\n");
    scanf(" %d" , &marks[0]);

    printf("Enter marks of second subject\n");
    scanf(" %d" , &marks[1]);

    printf("Enter marks of third subject\n");
    scanf(" %d" , &marks[2]);

	
    printf("Enter marks of fouth subject\n");
	scanf("%d", &marks[3]);

	
    printf("Enter marks of fifth subject\n");
	scanf("%d",&marks[4]);


	sum= marks[0]+marks[1]+marks[2]+marks[3]+marks[4];


	printf("sum of five subject is :%d\n",sum);

    average = (marks[0] + marks[1] + marks[2]) + marks[3] + marks[4] / 5.0;
    printf ("Average marks : %f\n" , average);

 
    return 0;
}

