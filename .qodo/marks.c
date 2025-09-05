#include <stdio.h>
void main()
{
    int sub1, sub2, sub3;

    float Total_marks;
    printf("Enter marks of the subject 1 : \n");
    scanf("%d", &sub1);

    printf("Enter marks of the subject 2 : \n");
    scanf("%d", &sub2);

    printf("Enter marks of the subject 3 : \n");
    scanf("%d", &sub3);

    printf("the marks of the subject 1 is %d \n\n", sub1);
    printf("the marks of the subject 2 is %d\n\n", sub2);
    printf("the marks of the subject 3 is %d\n\n", sub3);

    Total_marks = (sub1 + sub2 + sub3) / 3;

    printf("The total marks in persentage is %f \n", Total_marks);

    if (Total_marks >= 40 && sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
    {

        printf("Congractulations you have been promoted \n");
    }
    else
    {
        printf("sorry you are not promoted \n");
    }
}