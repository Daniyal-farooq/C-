#include<iostream>
using namespace std ;
int main()
{
	int number , a , b , c , d ;
	cout<<"Enter a 5-digit number : " ;
	cin>>number ;
	a 	   = number / 10000 ;
	number = number % 10000 ;
	b      = number / 1000  ;
	number = number % 1000  ;
	c      = number / 100   ;
	number = number % 100   ;
	d      = number / 10    ;
	number = number % 10    ;
	cout<<"The sum of all the digits is : "<<number + a + b + c + d ;
	return 0;
}
