#include<iostream>
using namespace std ;
int GET() ;
int PROCESS() ;
int SET() ;
int n1 , n2 ;
int main()
{
	GET() ;
	PROCESS() ;
	SET() ;
	return 0 ;
}
int GET() 
{
	cout<<"Enter value of variable 1 : " ;
	cin>>n1 ;
	cout<<"Enter value of variable 2 : " ;
	cin>>n2 ;
	return 0 ;
}
int PROCESS() 
{
	n1 = n1 + n2 ;
	return 0 ;
}
int SET () 
{
	cout<<"The sum of both numbers is : "<<n1 ;
	return 0 ;
}
