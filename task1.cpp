#include <stdio.h>
#include <iostream>
# include <cmath>
using namespace std;
int main()
{
double a,b;
double y;
cout<<"a=";
cin >>a;//�������� �������� ����� �
cout<<"b=";
cin >>b;//�������� �������� ����� b
y=(pow(a+b,2)-(pow(a,2)+2*a*b))/pow(b,2);//���������� �������� ����� �
cout<<endl<<"y="<<y<<endl;// ���� �������� ����� �
double x,c;
cout<<"c=";
cin >>c; //�������� �������� ����� c
cout<<"x=";
cin >>x; //�������� �������� ����� x
y=sqrt(pow(x,3)+a*pow(x,2)+b*x+c); //���������� �������� ����� �
cout<<endl<<"y="<<y<<endl; // ���� �������� ����� �
return 0;
}
