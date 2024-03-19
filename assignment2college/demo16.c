/*Write a program to crate four function calculator. Four functions are +, - , *, / */


#include<stdio.h>
int main()
{

int num1,num2;
float res;

char opt;

printf("enter num1 and num2:\n");
scanf("%d %d",&num1,&num2);

printf("enter case operation=");
scanf("%c",&opt);

res=0;
//printf("enter num2\n");
//scanf("%d",&num2);


//printf("enter case\n");
//scanf("%d",&no);

  switch(opt)
    {

        case '+':
            res = num1 + num2;
			//printf("res is:%lf=%d+%d");
            break;

        

        default:
		printf("invalid");
}
printf ("Res: %d %c %d = %f\n", num1, opt, num2, res);
   



	return 0;
	}
