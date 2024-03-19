/*Write a program to display
a. Prime numbers between 1 to 100
b. Armstrong Numbers between 1 to 500 */




#include <stdio.h>
int main(void)
{
int i, Number, count;
printf(" Prime Number from 1 to 100 are: \n");
for(Number = 1; Number <= 100; Number++)
{
count = 0;

for (i = 2; i <= Number/2; i++ )
{
if(Number%i == 0)
{
count++;
break;
}
}
if(count == 0 && Number != 1 )
{
printf(" %d ", Number);
}
}
return 0;
}


