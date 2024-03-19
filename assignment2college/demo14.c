/*Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
which the point lies. Also check for special cases point lies on +- x axis +- y axis ,origin.*/

#include<stdio.h>
int main()

{

int x,y;
printf("enter a pointer\n:");
scanf("%d%d",&x,&y);

if(x==1 && y==1) 
{
printf("quadrant is first(++)\n");
}

else if(x==0 && y==1)
{
printf(" quadrant is second(-+)");
}

else if(x==0 && y==0)
{
printf("third quadrant(--)");
}

else if(x==1 && y==0)
{
printf("fourth quadrant(+-)");


}

return 0;
}
