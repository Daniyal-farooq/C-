#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
int s,h,m,sec;
cout<<"Enter time in seconds : ";
cin>>sec;
h=sec/3600;
sec=sec%3600;
m=sec/60;
s=sec%60;
cout<<"\nHH-MM-SS="<<h<<"-"<<m<<"-"<<s;
}
