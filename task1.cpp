#include <stdio.h>
#include <iostream>
# include <cmath>
using namespace std;
int main()
{
double a,b;
double y;
cout<<"a=";
cin >>a;//введення значення змінної а
cout<<"b=";
cin >>b;//введення значення змінної b
y=(pow(a+b,2)-(pow(a,2)+2*a*b))/pow(b,2);//обчислення значення змінної у
cout<<endl<<"y="<<y<<endl;// друк значення змінної у
double x,c;
cout<<"c=";
cin >>c; //введення значення змінної c
cout<<"x=";
cin >>x; //введення значення змінної x
y=sqrt(pow(x,3)+a*pow(x,2)+b*x+c); //обчислення значення змінної у
cout<<endl<<"y="<<y<<endl; // друк значення змінної у
return 0;
}
