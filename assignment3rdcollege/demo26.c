/* q.25]6]

A
B C
D E F
G H I J */

    #include<stdio.h>

    void main()
    {
    int i,j,k=1,n=4;

    printf("Triangle using alphabets\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            printf("%4c",(char)(k+64));
        }
        printf("\n");
    }
}

/*7]----A B C D
        B C D
		C D 
		D    */


/*-------------------------------------*/

#include<stdio.h>
 
int  main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);
 
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c",(char)(j+64));
        }
        printf("\n");
    }
}


return 0;
}
    
