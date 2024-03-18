/* write a code to reverse the letters present in the given string.Do not use strrev() function */


#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
   char *str;
   int i,len;

  //not using any temp variable and assume we can use only string array and   length

   printf("Enter String : ");
   scanf("%s",str);
   len=strlen(str)-1;
   for(i=0;i<strlen(str)/2;i++)
   {
         str[i]+=str[len];
         str[len]=str[i]-str[len];
         str[i]=str[i]-str[len--];
   }
   printf("Reverse String is : %s",str);
   getch();
}
