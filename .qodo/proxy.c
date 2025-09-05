#include<stdio.h>
void main()
{
    double Tp = 80000;

    printf("the total population is %.2lf\n",Tp);

    int M = Tp *0.52;
    //no. of men is 52% of total population that is 41600;

    int F = Tp - M;
    //no. of wemen is 48% of total population that is 38400;

    printf("total men are %d\n",M);

    printf("total women are %d\n",F);

    int lt = Tp*0.48;
    //total no. of litracey is 48% that is 38400;

    int ltM = M * 0.35;
    //no. of letrate men is 35% that is 28000;

    int ltF = lt - ltM;
    //no. of letrate female is 10400;

    int IlM = M - ltM;

    int IlW = F - ltF;

    printf("Total no. of illitrate person is %d", IlM + IlW);
}




// #include<stdio.h>
// main()
// {
//     int a=80000,b,c,d,e,f,g;
//     b=(52*80000)/100;
//     c=(48*80000)/100;   
//     d=(48*80000)/100;
//     e=(80000-38400);
//     f=(52*41600)/100-(35*80000)/100;
//     g=(48*38400)/100-(10400);
//     printf("total number population is %d\n",a);
//     printf("total number of population is %d\n",b);
//     printf("total number of population is %d\n",c); 
//     printf("total number of population is %d\n",d);
//     printf("total number of population is %d\n",e);
//     printf("total number of population is %d\n",f);
//     printf("total number of population is %d\n",g);


   
  
// }
