#include<iostream>
using namespace std ;
int main()
{
	int number[5] ;
	
	for ( int l = 0 ; l < 5 ; l++ )
	{
		cout<<"value["<<l+1<<"] = " ;
		cin>>number[l] ;
	}
	
	cout<<"\nNumbers in the actual order.\n" ;
	for ( int l = 0 ; l < 5 ; l++ )
	{
		cout<<"\nvalue["<<l+1<<"] = "<<number[l] ;
	}
	cout<<"\n\nNumbers in the reverse order.\n";
	for ( int l = 4 ; l >-1 ; l-- )
	{
		cout<<"\nvalue["<<l+1<<"] = "<<number[l] ;
	}
	
}
