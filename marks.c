#include <stdio.h>
int main()
{
    int Total = 500;
    int m1, m2, m3, m4, m5, mark;
    float percent;
    printf("\n:Enter the marks for all  Five Subjects : ");
    printf("\nEnter the marks for Subject 1: ");
    scanf("%d", &m1);
    printf("\nEnter the marks for Subject 2: ");
    scanf("%d", &m2);
    printf("\nEnter the marks for Subject 3: ");
    scanf("%d", &m3);
    printf("\nEnter the marks for Subject 4: ");
    scanf("%d", &m4);
    printf("\nEnter the marks for Subject 5: ");
    scanf("%d", &m5);
    mark = (m1 + m2 + m3 + m4 + m5);

    percent = ((float)mark /Total) * 100;
    printf("\nTotal Marks is: %d", mark);
    printf("\nThe marks obtained in Percentage is: %f  ", percent);
    return 0;
}
