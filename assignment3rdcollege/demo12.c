/* Q.12] Write a program to accept integer values of base and index and calculate power of base to
index.
Input:
base: 2
Output: 32
Input:
base: 8
Output: 512
index: 5
index: 3 */

    #include <stdio.h>
    #include <math.h>
    int main ()
    {
       
        long int base, exp;
        printf (" Enter the base value: ");
        scanf (" %d", &base); 

        printf (" Enter the power value: ");
        scanf (" %d", &exp); 

       
        printf (" %d to the power %d is = %d ", base, exp, pow_num (base, exp));
    }

    
    int pow_num (int x, int y)
    {
        int power = 1, i; 
        for (i = 1; i <= y; ++i)
        {
            power = power * x;

        }
        return power;
    }




