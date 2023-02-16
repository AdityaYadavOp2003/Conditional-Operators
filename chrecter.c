# include <stdio.h>
void main()
{
    char c;
    printf("Enter any charecter : ");
    scanf("%c",&c);
     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
    printf("Its a Chrecter ");
    }
else
{
    printf("Not a Chrecter");
}
}