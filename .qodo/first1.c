#include<stdio.h>

void main()
{
    int x ;
    printf("Enter the day from the week (mon/tue/wed/thu/fri/sat/sun)");
    scanf("%d",&x);

    switch(x)
    {
        case 1:printf("monday is the first day of the week\n");
                   break;

        case 2:printf("tuesday is the second day of the week\n");
                   break;

        case 3:printf("wednesday is the third day of the week\n ");
                   break;

        case 4:printf("thursday is the fourth day of the week\n");
                   break;

        case 5:printf("friday is the fifth day of the week\n");
                   break;

        case 6:printf("saturday is the sixth day of the week\n");
                   break;

        case 7:printf("sunday is the seventh day of the week\n");
                   break; 
        default : printf("this is not the day of any week");

    }
}