#include<stdio.h>
void main()
//write a program to avg ten no.s input using for loop and sum.
{
   int x = 1, num, sum = 0;

   float avg;
   printf("Enter 10 no.s: \n");

   while (x <=10);
   {
        printf("Number : \n");
        scanf("%d",&x);
    sum = num + 1;
    x++;
   }

   avg = sum / 10.0;

   printf("sum = %d\n", sum);
   printf("average = %f\n", avg);

}