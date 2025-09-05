#include <stdio.h>
void main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("THIS IS THE LEAP YEAR \n");
    }
    else
    {
        printf("THIS IS NOT A LEAP YEAR\n");
    }
}