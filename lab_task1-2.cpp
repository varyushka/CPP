// Example program
#include <iostream>
#include <string>
#include <math.h>

int main()
{
   //programm 1
    int a=1;
    double b=15.15;
    double result=0;
    result=(1.3*sin(a)+cos(b)) / (0.81*sin(b)+1.1*cos(a))*pow(M_E,log(b/a));
    std::cout<<"result="<<result<<" ";
    //programm 2
    int a1=2;
    double b1=11.05;
    double result1=0;
    result1=pow(1./3,0.1*log(pow(M_E,3)/pow(2,sin(a1/b1*M_PI))+pow(2,cos(a1/b1*M_PI))));
    std::cout<<"result1="<<result1<<" ";

}
