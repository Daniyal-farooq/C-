#include<iostream>
using namespace std;
int main()
{
	int sum = 0 , loop = 1 ;
	while ( loop <= 50 )
	{
		sum = sum + ( loop * loop * loop ) ;
		loop++ ;
	}
	cout<<"The sum of given series is : "<<sum ;
	return 0 ;
}
