# include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter The Numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("A is greatest Among all %d", a);
    }
    else if (b>a && b>c)
    {
        printf("B is Greatest Amoung all %d", b);
    }
    else
    {
        printf("C is Greatest Amoung all %d",c);
    }
}