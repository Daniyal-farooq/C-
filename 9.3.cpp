#include<iostream>
using namespace std;
int table(int n) ;
int main()
{
	int n ;
	cout<<"Enter a number : " ;
	cin>>n ;
	table(n);
	return 0 ;
}
int table( int n)
{
	for ( int l = 1 ; l <11 ; l++)
	{
		cout<<n<<" * "<<l<<" = "<<n*l<<endl ;
	}
	
}
