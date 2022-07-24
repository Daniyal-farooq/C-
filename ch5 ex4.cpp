#include<iostream>
using namespace std;
int main()
{
	char choice ;
	cout<<"Press S or T to get area of TRIANGLE or SQUARE : " ;
	cin>>choice ;
	if( choice == 'S' )
	{
		float side ;
		cout<<"Enter the side of the SQUARE : " ;
		cin>>side ;
		cout<<"****** Calculating Area *****\n" ;
		cout<<"The area of SQUARE is : "<< (side * side) ;
	}
	else if ( choice == 'T' )
	{
		float base , height ;
		cout<<"Enter the base of the TRIANGLE : " ;
		cin>>base ;
		cout<<"Enter the height of the TRINAGLE : " ;
		cin>>height ;
		cout<<"****** Calculating Area ******\n" ;
		cout<<"The area of the TRIANGLE is : "<< ( 0.5 * base * height ) ;
	}
	else
	{
		cout<<"Invalid choice." ;
	}
	return 0 ;
}
