/* Write a program to accept a number and print the number in character, decimal, octal and hex
formats.*/


 #include<stdio.h>
   int main()
  {
   int value;
   printf("enter an integer");
   scanf("%d",&value);
     
    printf("char value is: %c\n",value);
	printf("decimal value is:%d\n",value);
    printf("Octal value is: %o\n",value);
    printf("Hex value is: %x\n",value);

  return 0;
  }

