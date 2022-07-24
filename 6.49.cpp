#include<iostream>
using namespace std ;
int main()
{
	int l = 5 , j , k;
	
	for ( int i = 1 ; i <= 5 ; i++ )
	{
		for ( j = 1 ; j < i ; j++ )
		{
			cout<<" ";
		}
		for ( k = j ; k <= l ; k++ )
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
}
