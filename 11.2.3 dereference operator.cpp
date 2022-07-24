#include<iostream>
using namespace std;
int main()
{
	int n1 , n2 , *p1 , *p2 ;
	p1 = &n1 ;
	p2 = &n2 ;
	cout<<"Enter the value of 1st variabe : " ;
	cin>>*p1 ;
	cout<<"Enter the value of the 2nd variable : " ;
	cin>>*p2 ;
	cout<<"n1 = "<<n1 ;
	cout<<"\nn2 = "<<n2 ;
	return 0 ;
}
// a program that uses dereference operator to enter values in variables indirectly using pointers
// the pointers first stores the address of the variable and then the value entered by the user is stored in those addresses
