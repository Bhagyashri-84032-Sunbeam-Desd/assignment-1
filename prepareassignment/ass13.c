/*declare an array of type char* and initialize it with a few strings(hard coded).display the string which are duplicated in that array. */

#include <stdio.h>

void findDuplicateLetters(char arr[], int size) {

printf("Duplicate letters in the array: ");

for (int i = 0; i < size - 1; i++) {

for (int j = i + 1; j < size; j++) {

if (arr[i] == arr[j]) {

printf("%c ", arr[i]);

break; 

}

}

}

printf("\n");

}

int main() {

char charArray[] = {'a', 'b', 'c', 'a', 'd', 'e', 'f', 'b', 'g', 'h', 'i'};

int size = sizeof(charArray) / sizeof(char);

findDuplicateLetters(charArray, size);

return 0;

}
