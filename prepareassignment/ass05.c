/*write a program to check input character uppercase,lowercase,digit and other character */
#include<stdio.h>
int main()
{
char ch;

printf("enter the character:");
scanf("%c",&ch);

if( (ch >= 65 && ch <= 90)  ||  (ch >= 97 && ch <= 122) )
{
if(ch>=65 && ch<=90)
printf("it is a uppercase");
else
printf("lowecase");
}
else if(ch>=48 && ch<=57)
{
printf("digit");
}

else if(ch==32 || ch== ' ')
{
printf("space");
}

else if(ch=='\t')
{
printf("tab");
}

else if(ch=='^')
{
printf("carraige return");
}

else(ch==10)
printf("new line\n");



return 0;
}

