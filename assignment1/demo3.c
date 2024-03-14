/*Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.*/

#include<stdio.h>  
int main()  
{  
    char ch;    
    printf("Enter a character");  
    scanf("%c",&ch);  
    printf("\n The ascii value of the ch variable is : %d", ch);
	printf("\n the octal value of the ch variable is: %o",ch);
	printf("\n the hex value of the ch variable is: %x",ch);
    return 0;  

}
