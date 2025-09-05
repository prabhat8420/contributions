#include<stdio.h>
void main()
{
    int p , s;

    printf("Enter the purchasing prinze : ");

    scanf("%d", &p);

    printf("Enter the saleing prize : ");

    scanf("%d", &s);

    int Profit =( s - p);

    float Pp =( Profit*100.0)/p;

    if(Pp > 30){
        printf("party time \n");
    }
    else{
        printf("try to improve your profit\n");
    }

}