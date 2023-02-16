# include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the Numbers : ");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("Number a is Greater  = %d",a);
    }
    else
    {
        printf("Number b is Greater = %d",b);
    }
}