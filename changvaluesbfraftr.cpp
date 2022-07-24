#include<iostream>
#include<iomanip>
using namespace std;
int main()
{//Program to display values before and after exchange
int a,b,c;
cout<<"Enter values of variables a and b";
cin>>a>>b;
cout<<"\nBefore exchange :\nValue in a:"<<a<<"\nValue in b:"<<b;
c=a;
a=b;
b=c;
cout<<"\nAfter exchange :\nValue of a:"<<a<<"\nValue of b:"<<b;
}







