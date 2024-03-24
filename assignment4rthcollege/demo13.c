/*Write a function to implement four function calculator. The return value indicates the error (due
to zero denominator in case of division). The result is returned via out-parameter.*/



#include<stdio.h>

float plus(float a, float b) { return a+b; }
float minus(float a, float b) { return a-b; }
float times(float a, float b) { return a*b; }
float divide(float a, float b) { return a/b; }

int main() {

//declare function pointers
int a,b;
printf("enter a num:");
scanf("%d%d",&a ,&b);

  float(*fptr_p)(float, float);
  float(*fptr_m)(float, float);
  float(*fptr_t)(float, float);
  float(*fptr_d)(float, float);

//point ptr's to functions

  fptr_p=&plus;
  fptr_m=&minus;
  fptr_t=&times;
  fptr_d=&divide;

return 0;
}
