#include <stdio.h>
void main()
{
    int a, b, c;

    printf("Enter the no a : ");
    scanf("%d", &a);

    printf("Enter the no b : ");
    scanf("%d", &b);

    printf("Enter the no c : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("the gretest no. is : %d", a);
    }
    if (b > a && b > c)
    {
        printf("the gretest no. is : %d", b);
    }
    if (c > a && c > b)
    {
        printf("the gretest no. is : %d", c);
    }
}