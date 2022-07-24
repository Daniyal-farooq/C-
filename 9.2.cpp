#include<iostream>
using namespace std;
int max(int a , int b);
int main()
{
	int first,second;
	cout<<"Enter a nummber : " ;
	cin>>first;
	cout<<"Enter second number : " ;
	cin>>second;
	max( first , second );
	return 0 ;
}
int max(int a, int b)
{
	if ( a < b )
	cout<<"\n"<<b<<" is greater.";
	if ( a > b )
	cout<<"\n"<<a<<" is greater.";
	return 0;
}
