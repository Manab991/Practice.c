#include<stdio.h>
#include<math.h>
int odd(int len)
{
    int s2,i,sum=0,r;
    float s1;
      s1=sqrt(len);
        s2=sqrt(len);
        if(s1>s2)
        {
            for(i=1;i<=s2;i++)
            {
                printf("%d\t",2*i-1);
                sum=sum+(2*i-1);
            }
            r=len-sum;
            odd(r);
        }
        else if(s1==s2 )
       {
             for(i=1;i<=s2;i++)
            {
                printf("%d\t",2*i-1);
                
            }
       }
}
       


int main()
{
    int len,s2,i,sum=0,r;
    float s1;
    printf("Enter the length of the stick ");
    scanf("%d",&len);
    if(len%2==0)
    {
        printf("\nThe length of broken sticks can be  %d  %d",len/2,len/2);
    }
    else
    {
        printf("\nThe length of broken sticks can be :");
          odd(len);

    }
    return 0;
}