/*accept the integer number and when program is read make it octal,hexadecimal,binary,decimal */


#include <stdio.h>

int main()
{
    int value;
	printf("enter the value:\n");
	scanf("%d",&value);
    
    printf("Decimal value is: %d\n",value);
    printf("Octal value is: %o\n",value);
    printf("Hexadecimal value is (Alphabet in small letters): %x\n",value);
    printf("Hexadecimal value is (Alphabet in capital letters): %X\n",value);

    return 0;
}
