/*Q.1 Write a program to demonstrate use of string library functions.
a. strlen()
e. stricmp()
i. strncpy()
b. strcpy()
f. strrev()
j. strncat()
c. strcat()
g. strchr()
k. strncmp()
d. strcmp()
h. strstr()
l. strtok() */

//a.strlen()


#include<stdio.h>
#include<string.h>

// strlen - calculate the length of a string
// size_t strlen(const char *s);
size_t my_strlen(const char *s);

int main(void)
{
	char str[20];
	size_t len;

	printf("Enter string : ");
	scanf("%[^\n]s", str);

	printf("str = %s\n", str);
	
	//len = strlen(str);
	len = my_strlen(str);
	printf("Length = %d\n", len);

	return 0;
}

size_t my_strlen(const char *s)
{
	size_t length = 0;
	for(int i = 0 ; s[i] != '\0' ; i++)
		length++;
	return length;
}

//b. strcat()
#include<stdio.h>
#include<string.h>

// strcat, strncat - concatenate two strings
// char *strcat(char *dest, const char *src);

int main(void)
{
	char str1[20];
	char str2[20];

	printf("Enter string 1 : ");
	scanf("%s", str1);

	printf("Enter string 2 : ");
	scanf("%s", str2);

	printf("Before strcat : str1 = %s, str2 = %s\n", str1, str2);

	strcat(str1, str2);

	printf("After strcat : str1 = %s, str2 = %s\n", str1, str2);

	return 0;
}

//c.strcpy

#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[20];
	char str2[20];
	int ret;

	printf("Enter string 1 : ");
	scanf("%s", str1);

	printf("Enter string 2 : ");
	scanf("%s", str2);

	printf("str1 = %s\nstr2 = %s\n", str1, str2);

	ret = strcmp(str1, str2);
	printf("ret = %d\n", ret);
	if(ret == 0)
		printf("str1 and str2 are equal\n");
	else if(ret < 0)
		printf("str1 is less than str2\n");
	else
		printf("str1 is greater than str2\n");


	return 0;
}

//d.strchr()

#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[20] = "PG - DESD";
	char ch;
	char *ptr;

	printf("Enter character : ");
	scanf("%c", &ch);

	printf("str = %s [ %u ]\n", str, str);

	//ptr = strchr(str, ch);
	ptr = strrchr(str, ch);
	if(ptr == NULL)
		printf("character is not found\n");
	else
	{
		printf("character is found\n");
		printf("ptr = %u\n", ptr);
		printf("*ptr = %c\n", *ptr);
		printf("ptr = %s\n", ptr);
	}
	return 0;
}

//e.
// strstr, strcasestr - locate a substring
// char *strstr(const char *haystack, const char *needle);

int main(void)
{
	char str[64] = "I am student of DESD course";
	char substr[4] = "am";
	
	char *ptr = strstr(str, substr);

	printf("str = %u\n", str);

	printf("ptr = %u\n", ptr);
	printf("ptr = %s\n", ptr);	

	return 0;
}

//f.strtok()


#include<stdio.h>
#include<string.h>

// strtok, strtok_r - extract tokens from strings
 char *strtok(char *str, const char *delim);

int main(void)
{
	char str[64] = "I am student of DESD course";
	char *ptr;

/*	ptr = strtok(str, " ");
	printf("token = %s\n", ptr);

	ptr = strtok(NULL, " ");
	printf("token = %s\n", ptr);

	ptr = strtok(NULL, " ");
	printf("token = %s\n", ptr);

	ptr = strtok(NULL, " ");
	printf("token = %s\n", ptr);

	ptr = strtok(NULL, " ");
	printf("token = %s\n", ptr);

	ptr = strtok(NULL, " ");
	printf("token = %s\n", ptr);

	ptr = strtok(NULL, " ");
*/	printf("token = %s\n", ptr);

	printf("----------------------\n");

	ptr = strtok(str, " ");
	printf("ptr = %s\n", ptr);
	while(ptr != NULL)
	{
		ptr = strtok(NULL, " ");
		printf("ptr = %s\n", ptr);
	}
	return 0;
}

//g.strrev /strupr /strlwr


#include<stdio.h>

char *strrev(char *s);
char *strupr(char *s);
char *strlwr(char *s);


int main(void)
{
	char str[] =  "DeSd";

	printf("str before reverse : %s\n", str);

	strrev(str);

	printf("str after reverse : %s\n", str);

	printf("Uppercase string : %s\n", strupr(str));
	printf("Lowercase string : %s\n", strlwr(str));

	return 0;
}

char *strrev(char *s)
{
	int i = 0, j = 0;
	for( ; s[j] != '\0' ; j++ );
	j--;
	for( ; i < j ; i++, j--)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	return s;
}

char *strupr(char *s)
{
	for(int i = 0 ; s[i] != '\0' ; i++)
	{
		if(s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return s;
}

char *strlwr(char *s)
{
	for(int i = 0 ; s[i] != '\0' ; i++)
	{
		if(s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
	}
	return s;
}
