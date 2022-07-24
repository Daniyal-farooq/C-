#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i ,inner,outer;
	cout<<"Enter height of TRIANGLE : " ;
	cin>>i;
	char ch = 'A' ;
	for ( outer = 1 ; outer <= i ; outer += 1 )
	{
		cout<<"\n" ;
		for ( inner = 1 ; inner <= outer ; inner ++ )
		{
			cout<<ch;
			ch++ ;
		}
	}
	
}
