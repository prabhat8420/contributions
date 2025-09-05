#include<stdio.h>
void main()
{
    int n , x , X ,  y , Y , z , rev = 0;

    printf("Enter a three digit number : ");

    // let n is 129;
    scanf("%d",&n);
    
    
    x = n % 10;// now the value of x is 9;

    X = n/10;   // here the value of X is now 12;

    y = X % 10; // the value of y is here is 2;

    Y = X / 10; //the value of Y is 1;

    z = Y % 10; // the value of z is 1;

    rev = (x * 100 )+ (y *10) + z;

    printf("The reverse of the number %d is %d" , n , rev);

}