
#include<stdio.h>
#include<math.h>
float s,p,t,r;
int simple_interest()
{   
    s = (p*t*r)/100.0;
    printf("Simple Interest = %f \n", s);
    return 0;
}
int compound_interest()
  { float c,m;
   m=1+r/100.0;
    c=p*(pow(m,t)-1);
    printf("Compound Interest = %f",c);
  return 0;
  }
int main()
{    
	 printf("Enter principal amount (p): ");
	 scanf("%f", &p);
	 printf("Enter time in year (t): ");
	 scanf("%f", &t);
	 printf("Enter rate in percent (r): ");
	 scanf("%f", &r);
     printf("SIMPLE INTEREST:");
     simple_interest();
     printf("COMPOUND INTEREST:");
     compound_interest();
	 return(0);
}