#include<iostream>
using namespace std;
int main()
{
	int x , *p1 ;
	cout<<"Enter value of variable : " ;
	cin>> x ;
	p1 = &x ;
	cout<<"The adress of x is : "<<p1 ;
	p1++ ;
	cout<<"\nThe adress of x after addition is : "<<p1 ;
	p1-- ;
	cout<<"\nThe adress of x after subtraction is : "<<p1 ; 
}
