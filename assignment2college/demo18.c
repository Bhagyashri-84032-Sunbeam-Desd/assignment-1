/* Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to following tables*/


#include<stdio.h>
int main()
{
int empid,deptno;
char desg;

printf("enter employee id  :");
scanf("%d",&empid);
printf("enter deptno       :");
scanf("%d",&deptno);
printf("enter desg         :");
scanf("%*c%c",&desg);

switch(deptno)
{

case 10: printf("employee with empid: %d is working in marketing department\n",empid);
break;

case 20: printf("employee with empid: %d is working in managing department\n",empid);
break;

case 30: printf("employee with empid: %d is working in sales department\n",empid);
break;

case 40: printf("employee with empid: %d is working in designing department\n",empid);
break;
}

switch(desg)
{
 case 'M': printf("Manager\n");
 break;

 case 's': printf("Supervisor\n");
 break;

 case 'S': printf("Security officer\n");
 break;

 case 'C': printf("clerk\n");
 break;

}

return 0;
}
