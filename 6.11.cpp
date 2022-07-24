#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c ;
	int d ;
	cout<<"Enter a number : " ;
	cin>> d ;
	n = d ;
	
	a = n/1000 ;
	n = n%1000 ;
	b = n/100 ;
	n = n%100 ;
	c = n/10 ;
	n = n%10 ;
	if ( (a*a*a) + ( b*b*b ) + ( c*c*c ) + ( n*n*n) == d )
	{
		cout<<"It is an Armstrong number." ;
	}
	else
	{
		cout<<"It is not an Armstrong number." ;
	}
	//cout <<a<<endl<<b<<endl<<c<<endl<<n ;
}
