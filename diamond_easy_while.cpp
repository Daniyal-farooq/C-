#include<iostream>
using namespace std ;
int main()
{
	int n ; 
	cout<<"Enter the size of the diamond : " ;
	cin>> n ;
	
	n  = n/2;
	int j , i , k ;
	j = 0 ;
	while ( j < n  )
	{
		int i = n;
		while ( i > j )
		{
			cout<<" ";
			i--;
		}
		int k = 0;
		while ( k <= j )
		{
			cout<<" *";
			k++;
		}
		cout<<"\n";
		j+=1;
	}
	n = n+1 ;
	
	j = 0;
	while ( j < n )
	{
		i = 0 ;
		while( i <= j )
		{
			cout<<" ";
			i++;
		}
		k = n ;
		while ( k > j )
		{
			cout<<"* ";
			k--;
		}
		j++;
		cout<<"\n";
	}

}
