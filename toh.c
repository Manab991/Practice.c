#include<stdio.h>
void hanoi(int,char,char,char);
void main()
{
 int n;
 char source,auxilary,destination;
 source='A';
 auxilary='B';
 destination='C';
 printf("Enter the number of disk::");
 scanf("%d",&n);
 hanoi(n,source,auxilary,destination);
}
void hanoi(int n,char source,char auxilary,char destination)
{
    if(n==1)
    {
        printf("\nDisk will move from %c to %c",source,destination);
        return;
    }
        hanoi(n-1,source,destination,auxilary);
        printf("\nDisk will move from %c to %c",source,destination);
        hanoi(n-1,auxilary,source,destination);
    

}