#include<iostream>
using namespace std;
int main()
{
	int n1 , n2 , n3 ;
	cout<<"Enter 1st number : ";
	cin>>n1 ;
	cout<<"Enter 2nd number : " ;
	cin>>n2 ;
	cout<<"Enter 3rd number : " ;
	cin>>n3 ;
	if ( n1 != n2 && n1 != n3 )
	{
		cout<<n1<<n2<<n3<<endl ;
		cout<<n1<<n3<<n2<<endl ;
		cout<<n2<<n1<<n3<<endl ;
		cout<<n2<<n3<<n1<<endl ;
		cout<<n3<<n1<<n2<<endl ;
		cout<<n3<<n2<<n1 ;
	}
	else if ( ( n1 == n2 || n2 == n1 ) && n1 != n3 )
	{
		cout<<n1<<n2<<n3<<endl ;
		cout<<n1<<n3<<n2<<endl ;
		cout<<n2<<n3<<n1<<endl ;
		cout<<n3<<n2<<n1 ;
	}
	else if ( n1 == n3 && n1 != n2 )
	{
		cout<<n1<<n2<<n3<<endl ;
		cout<<n1<<n3<<n2<<endl ;
		cout<<n2<<n1<<n3<<endl ;
		cout<<n3<<n2<<n1 ;
	}
	else if ( n2 == n3 && n2 != n1 )
	{
		cout<<n1<<n2<<n3<<endl ;
		cout<<n2<<n1<<n3<<endl ;
		cout<<n2<<n3<<n1<<endl ;
		cout<<n3<<n1<<n2<<endl ;

	}
	return 0 ;
}
