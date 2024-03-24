

/* print binary of a given number */


#include<stdio.h>

void print_binary(void *pvar, size_t size)
{
	unsigned char *ptr = (unsigned char *)pvar;
	unsigned mask;
	for(int i = size - 1 ; i >= 0 ; i--)
	{
		mask = 0x80;
		while(mask)
		{
			if(*(ptr + i) & mask)
				printf("1");
			else
				printf("0");
			
			mask = mask >> 1;
		}
		printf(" ");
	}
	printf("\n");
}

int main(void)
{
	int num;

	printf("Enter num : ");
	scanf("%d", &num);

	printf("%d : ", num);
	print_binary(&num, sizeof(num));





	return 0;
}

