//VOID TYPE 
// #include<stdio.h>
// int add(int,int);
// int add(int a,int b)
// {
//     printf("\nSUM=%d",a+b);
// }
// int main()
// {
//     int a,b;
//     printf("Two no are ::");
//     scanf("%d%d",&a,&b);
//     add(a,b);
//     return 0;
// }

//INTEGER TYPE
#include<stdio.h>
int add(int,int);
int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b;
    printf("Two no are ::");
    scanf("%d%d",&a,&b);
    printf("\nSUM=%d",add(a,b));
    return 0;
}