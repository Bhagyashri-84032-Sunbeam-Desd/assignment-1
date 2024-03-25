/*input an array elements and find maximum and minimum of them */


#include <stdio.h>

int main()


{


    int arr1[100];

    int i, mx, mn, n;

  
    printf("\n\nFind maximum and minimum element in an array :\n");

    printf("--------------------------------------------------\n");

    printf("Input the number of elements of array:");
    scanf("%d", &n);

    
    printf("Input elements in the array %d:\n", n);

    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

   
    mx = arr1[0];

    mn = arr1[0];

    
    for (i = 1; i < n; i++)

    {
        
        if (arr1[i] > mx)
        {
            mx = arr1[i];
        }

        
        if (arr1[i] < mn)
        {
            mn = arr1[i];
        }
    }

    
    printf("Maximum element is : %d\n", mx);
    printf("Minimum element is : %d\n\n", mn);
	return 0;
}



