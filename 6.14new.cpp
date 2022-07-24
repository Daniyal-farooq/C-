#include<iostream>
using namespace std ;
int main()
{
	int s , e ;
	cout<<"Enter the starting number of the range : " ;
	cin >> s ;
	cout<<"Enter the ending number of the range : " ;
	cin>>e ;
	cout<<"All the even numbers in the given range are given below as; \n" ;
	while ( s <= e )
	{
		if ( s%2==0 )
		{
			cout<<s<<endl ;
		}
		s++ ;
	}
	return 0 ;
}
