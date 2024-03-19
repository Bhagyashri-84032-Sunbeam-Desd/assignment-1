#include<stdio.h>
int main()
{

	int num,i;

printf("enter a number:");
scanf("%d",&num);

 i = 1;

while(i <=10)
{
	printf("%d x %d = %d\n", num, i, num * i);
	i++;
}
	return 0;

}

