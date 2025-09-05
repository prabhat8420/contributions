#include<stdio.h>
int main()
{
    int a;
    printf("a is the no. from the week 1-7\n");
    scanf("%d",&a);

    switch(a){

        case 1: printf(" first day of the week is Monday\n");
                break;
        case 2: printf("2nd day of the week is Tuesday\n");
                break;
        case 3: printf("third day of the week is Wednesday\n");
                break;
        case 4: printf("4th day of the week is Thursday\n");
                break;
        case 5: printf("5th day of the week is Friday\n");
                break;
        case 6: printf("6th day of the week is Saturday\n");
                break;
        case 7: printf("7th day of the week is Sunday\n");
                break;
        default:printf("Invalid Input\n");
    }
}