#include <stdio.h>
int main()
{
    int year;
    printf("Enter the Year : ");
    scanf("%d",&year);
    if (year%400==0)
    {
        printf("its a Leap Year %d",year);
    }
    else if (year%100==0)
    {
        printf("Its not a Leap Year %d",year);
    }
    else if (year%4==0)
    {
        printf("Its a Leap Year %d",year);
    }
    else
    {
        printf("Not A Leap Year %d",year);
    }
    return 0;
}