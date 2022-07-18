#include<stdio.h>
#include<stdlib.h>
struct node_ins
{
    struct node_ins*left
    int data;
    struct node_ins*right;
};
typedef struct node_ins node;
node*start=NULL;
node*getnode()
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("Enter the data of node :");
    scanf("%d",&newnode->data);
    newnode->left=NULL;
   newnode->right=NULL;
}

void create(int n)
{
    int i;
    node*newnode;
    node*temp;
     for(i=0;i<n;i++)
        {
            newnode=getnode();
            if(start==NULL)
                {
                    start=newnode;
                }
            else
                {   temp=start;
                    while(temp->right!=NULL)
                        temp=temp->right;
                    temp->right=newnode;
                    newnode->left=temp;
                }
        }    
}
void display()
{
    node*temp;
    if(start==NULL)
        printf("The list is empty");
    else
       { 
           temp=start;
         while(temp!=NULL)
        {  
            printf("%d\t",temp->data);
           temp=temp->right;
        }
    }
}
 void main()
 {
    int n;
    printf("\nEnter how many nodes have to create: ");
    scanf("%d",&n);
    create(n);
    printf("\nLinked list elements are : ");
    display();
    
 }