#include<iostream>
using namespace std ;
int main()
{
	int n , a , b , c , d ;
	cout<<"Enter a number : ";
	cin>> n ;
	a = n / 100 ;
	b = n % 100 ;
	n = b ;
	c = n / 10 ;
	d = n % 10 ;
	cout<<"Sum of all digits = "<<a+c+d ;
	return 0 ;
}
