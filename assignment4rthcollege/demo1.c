/* A ITERATIONS
Q.1] Write a function to calculate factorial of a given number.*/

#include<stdio.h>

// function declare here ,return-type,funname<argument>
int findFact(int);

int main()
{

    int x,fact,n;//variables 

    printf("Enter a number to get factorial: ");

    scanf("%d",&n);
    //function calling 
    fact = findFact(n);

    printf("The factorial of %d is: %d",n,fact);

    return 0;

}
//function definitions
int findFact(int n)
{

    int x,fact=1;

    for(x=1;x<=n;x++)

      fact=fact*x;

     return fact;

}
