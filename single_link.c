#include<stdio.h>
struct node
{
    int data;
    struct node *link;
} object1,object2;

void main()
{
    object1.data=15;
    object1.link=NULL;
    object2.data=35;
    object2.link=NULL;
    object2.link=&object1;
    printf("The data addrssing on object2 is ::%d ",object2.link->data);
    
}

