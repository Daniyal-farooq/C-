#include<iostream>
using namespace std ;
int main()
{
	int n = 0 ;
	repeater :
	cout<<"C++\n" ;
	n++ ;
	if ( n<5 )
	{
		goto repeater ;
	}

}
