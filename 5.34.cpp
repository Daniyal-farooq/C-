#include<iostream>
using namespace std ;
int main()
{
	int number ;
	cout<<"Enter a number : " ;
	cin>>number ;
	cout<<( number%3 == 0 ? "Divisible." : "Not Divisible.") ;
	return 0 ;
}
