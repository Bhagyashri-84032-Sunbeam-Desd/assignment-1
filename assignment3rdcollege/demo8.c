/*Q 7] Write a program to accept a number and print its prime factors.*/

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    
    int n;

    printf("enter the number");
	scanf("%d",&n);
    if (n > 0) 
	{
    
        while (n % 2 == 0)
		{
            printf("2 "); 
            n=n/2;
        }

   
        for (int i = 3; i <= sqrt(n); i += 2) 
		{
        
            while (n % i == 0)
			{
                printf("%d ", i); 
                n=n/i; 
            }
        }

       
        if (n > 2) 
		{
            printf("%d ", n); 
        }
    }

    return 0; 
}
