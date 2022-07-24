#include<iostream>
using namespace std;
int main()
{
	int n , *pointer ;
	cout<<"Enter a value in the variable n : " ;
	cin>> n ;
	pointer = &n ;
	cout<<"Adress of n variable through pointer : "<<pointer ;
	cout<<"\nValue of n variable through pointer : "<<*pointer ;
}
