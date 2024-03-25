/*Q.8 Write a function to search the given number into the array using linear search and return the
index of the element. If element is not found it should return -1.*/


#include <stdio.h>

int main() {

int a[20],key,n,i;

scanf("%d",&n,printf("Enter the size of an array : "));

printf("Enter the array data ");

for(i=0; i<n; i++)

scanf("%d",&a[i]);

printf("\nArray elements are below\n");

for(i=0; i<n; i++)

printf("%d, ",a[i]);

printf("\nEnter the searching element : ");

scanf("%d",&key);

for(i=0; i<n; i++)

{

if(a[i]==key)

{

printf("\n%d is found at %d position",key,i+1);

break;

}

}

if(i==n)

printf("\n%d is not found !!!");

return 0;

}
