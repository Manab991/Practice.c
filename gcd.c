#include<stdio.h>
int gcd(int,int);
void main()
{
    int a,b,z;
    printf("enter two number ::");
    scanf("%d%d",&a,&b);
    z=gcd(a,b);
    printf("GCD of %d and %d is ::%d",a,b,z);
}
int gcd(int num1,int num2)
{   int x;
    if(num1==0)
    x=num2;
    else if (num2==0)
    x=num1;
    else
    x=gcd(num2,num1%num2);
    return x;
}
