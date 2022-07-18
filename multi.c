#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],c[100][100];
    int m,n,p,q,i,j;
    printf("No of row and column in 1st matrix :: ");
    scanf("%d%d,&m,&n");
    printf("Enter the elements in 1st matrix");
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("No of row and column in 2nd matrix :: ");
    scanf("%d%d,&p,&q");

    if(n=!p)
    printf("Multiplication can not take place");
    else
    {
        printf("Enter the elements in 2nd matrix");
        for(i=0;i<p;i++)
        {
           for(j=0;j<q;j++)
           scanf("%d",&a[i][j]);
        }
    
       printf("The product matrix is :");
       for(i=0;i<m;i++)
       {
           for(j=0;j<q;j++)
           {
               for(k=0);
           }
       }
    
    }


}