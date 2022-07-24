#include<iostream>
using namespace std ;
int main()
{
	int n , l = 1 ;
	cout<<"Enter a number to get it's table on the screen :  ";
	cin>>n ;
	while ( l <= 10 )
	{
		cout<<n<<" * "<<l<<" = "<<n * l <<endl ;
		l++;
	}
	return 0 ;
}
