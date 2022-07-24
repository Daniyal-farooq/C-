#include<iostream>
#include<math.h>
using namespace std;
int main()
{float a,b,c,side,area;
cout<<"Enter 3 sides of triangle : \n";
cin>>a>>b>>c;
side=(a+b+c)/2;
area=sqrt(side*(side-a)*(side-b)*(side-c));
cout<<"Area is:"<<area;
}
