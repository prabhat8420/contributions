#include<stdio.h>
void main()
{
    int p ,q;

    printf("Enter the prize of the item : ");
    scanf("%d",&p);

    printf("Enter the quantity of the item : ");
    scanf("%d", &q);

    if(q > 1000){
        printf("the total expense is : %f", p * q *0.9);
    }
    else{
        printf("the total expense is : %f", p * q* 1.0);
    }

}