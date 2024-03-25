/*Write a function to remove duplicate elements from the array. After processing the array should
store only the unique elements consecutively. Also function should return the number of unique
elements into the array.*/


#include <stdio.h>  
  
int main()  
{  
    
    int arr[20], i, j, k, size;  
      
    printf("Define the number of elements in an array:");  
    scanf(" %d", &size);  
      
    printf(" \n Enter %d elements of an array: \n ", size);  
    
    for( i = 0; i < size; i++)  
    {  
        scanf(" %d", &arr[i]);  
    }  
      
      
      
    for( i = 0; i < size; i++)  
    {  
        for( j = i + 1; j < size; j++)  
        {  
              
            if( arr[i] == arr[j])  
            {  
                
                for( k = j; k < size - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                
                size--;  
                  
            
                j--;      
            }  
        }  
    } 





 printf(" \n Array elements after deletion of the duplicate elements: ");

    // for loop to print the array

    for( i = 0; i< size; i++)
    
	{
        printf(" %d \t", arr[i]);
    }

    return 0;
}
