#include<iostream>
using namespace std ;
int main()
{
	int number ;
	cout<<"Enter a number : " ;
	cin>>number ;
	cout<<( number%2 == 0 ? "It is an even number." : "It is an odd number.") ;
	return 0 ;
}
