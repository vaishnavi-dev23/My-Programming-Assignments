#include<stdio.h>
int main()
{
    float m1 = 98;
    float m2 = 80;
    float m3 = 70;
    float m4 = 85;
    float m5 = 95;
    float T = 500;
    float O = m1 + m2 + m3 + m4 + m5;
    float per = (O / T ) * 100;
    printf("Obtained marks are %f out of %f and percentage is %f%%",O,T,per);
    return 0;
    
}