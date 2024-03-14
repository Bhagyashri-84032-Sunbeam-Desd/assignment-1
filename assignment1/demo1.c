/* Q.1 Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.*/




#include <stdio.h>

int main()

{

int a, b,sum,diff,prod;
printf("enter two integer");
scanf("%d %d",&a, &b);
sum = a+b;     
printf("sum of %d= %d+ %d\n",a,b,sum);

diff = a-b;
printf("diff of %d=%d-%d\n",a,b,diff);

prod = a*b;
printf("product of %d=%d*%d\n",prod);
return 0;
}

