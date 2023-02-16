# include <stdio.h>
int main()
{
    int a;
    printf("Enter The Number : ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("Number is Even : %d",a);
    }
    else
    {
        printf("Number is Odd : %d ", a);
    }
    return 0;
}