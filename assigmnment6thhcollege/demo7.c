/* Q.Write a function to find and replace a string using library functions [strstr(), strncpy(), strlen(),
strcat(), strcpy(), etc.
Input :
Source : This is test time
Find
: is
Replace: was*/


#include <stdio.h>

#include <string.h>

void replace_string(char *str, char findChar, char replace_string); 

{

int i;

{
// Loop through the string

for (i = 0; str[i] != '\0'; i++)
{

// If the current character matches the character to be replaced

if (str[i] == findChar)


// Replace the character with the new character

//str[i] = replaceChar;
str[i] = replace_string;



}
}
}



int main() 
{

char inputString[100]; // Define a character array to hold the input string

char findChar;
//char replacechar;


char replace_string;

printf("Enter a string: ");

fgets(inputString, sizeof(inputString), stdin);

printf("Enter the character to find: ");

scanf(" %c", &findChar);

printf("Enter the character to replace with: ");

//scanf(" %c", &replaceChar);
scanf("%c",&replace_string);

// Call the function to replace the character

//replacechar(inputString, findChar, replaceChar);
replace_string("inputString,findChar,replace_string");
// Display the modified string

printf("String after replacement: %s\n", inputString);

return 0;

}
