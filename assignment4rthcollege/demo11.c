/*  */



#include <stdio.h>
int solve(int *a, int *b){
    int temp = *a + *b;
    *b = *a * *b;
    *a = temp;
}
int main(){
    int a,b;
	printf("enter a num:");
	scanf("%d%d",&a ,&b);
    solve(&a, &b);
    printf("a + b = %d and a * b = %d", a, b);
	return 0;
}

