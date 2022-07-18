#include<stdio.h>
void main( )
{  
    int i,j,x,y,z,sum=0,fact=1;
   printf("\nEnter the number :");
   scanf("%d",&x);
   if(x==0)
   printf("\nFactorial is 1");
   else
   {
    while(x!=0)
    {
    y=x%10;
    x=(x/10);
    for(i=1;i<=y;i++)
        fact=fact*i;
    sum=fact+sum;
    }
    printf("\nFactorial is %d",sum);
   }
}
