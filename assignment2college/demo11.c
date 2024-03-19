/*Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50. */




#include<stdio.h>
int main()
{

int quantity;
float price,Discount;
printf("enter the quantity:");
scanf("%d",&quantity);

 price= quantity*5;

//printf("price is %f:",price);


//printf("discount is %2f",Discount);

if (quantity>30 && quantity<50)
{

 Discount= price- (10.0/price)*100;
printf("discount price is rs %.2f\n",Discount);
}


else if(quantity>50)
{
Discount =price- (15.0/price)*100;
printf("discount price is %.2f\n",Discount);
}
else
{
printf("the price of the %d is rs %.2f\n",quantity,price);
}
return 0;
}
