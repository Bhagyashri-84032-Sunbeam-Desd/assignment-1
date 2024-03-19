/*q.3) d]Check whether it is Armstrong no. (when sum of cube of all digits of equals the number
then the number is called as Armstrong number) */


    #include<stdio.h>
    int main()
    {
    int n,r,sum=0,temp;
    printf("enter the number=");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
    }
    if(temp==sum)
    printf("armstrong  number ");
    else
    printf("not armstrong number");
    return 0;
    }
