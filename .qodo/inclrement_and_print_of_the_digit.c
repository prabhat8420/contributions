#include <stdio.h>
void main()
{
    int n, p, P, q, Q, r;

    printf("Enter the three digit no. : ");
    // let n is a three digit no. 987;
    scanf("%d", &n);

    p = (n % 10) + 1;
    // now the value of p is 8;
    P = n / 10;
    // now the value of P is 98;
    q = (P % 10) + 1;
    // now the value of q is 9;
    Q = (P / 10) + 1;
    // now the value of Q is 9;
    r = (Q * 100) + (q * 10) + p;
    printf("the no. after the incriment in the digits is %d", r);
}