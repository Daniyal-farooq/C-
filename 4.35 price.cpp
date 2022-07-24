#include<iostream>
#include<math.h>
using namespace std;
int main()
{ float e,g,p;
cout<<"Enter current price of electricity : ";
cin>>e;
cout<<"Enter current price of gas : ";
cin>>g;
cout<<"Enter current price of petrol : ";
cin>>p;
e=e+((e/100)*10);
g=g+((g/100)*10);
p=p+((p/100)*10);
cout<<"New price per unit of electricity is : "<<e;
cout<<"\nNew price per unit of gas is : "<<g;
cout<<"\nNew price per unit of petrol is : "<<p;
}
