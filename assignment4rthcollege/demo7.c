/*b.2] to calculate power using recursion */

#include<stdio.h>
#include<math.h>
int power(int n1, int n2);
int main() 
{
    int base, index, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &index);

    result = power(base, index);

    printf("%d^%d = %d", base, index, result);
    return 0;
}
