#include<iostream>
#include<iomanip>
using namespace std;
void per ( float a );
void area( float a );
int main () 
{
	float l ;
	cout<<"Enter the lenth of a aside of square : " ;
	cin>> l ;
	per ( l ) ;
	area ( l ) ;
	return 0 ;
}
void per ( float a  )
{
	cout<<fixed<<setprecision(4)<<"\nThe permimeter of aquare is : "<< 4 * a  ;
}
void area ( float a  )
{
	cout<<fixed<<setprecision(4)<<"\nThe area of aquare is : "<< a * a ;
}

