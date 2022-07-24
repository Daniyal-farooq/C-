#include<iostream>
using namespace std ;
int main()
{
	int x ;
	cout<<"Enter an integer : " ;
	cin>>x ;
	x+=5 ;
	cout<<"\nx+=5 : "<<x;
	x-=5 ;
	cout<<"\nx-=5 : "<<x;
	x*=5 ;
	cout<<"\nx*=5 : "<<x;
	x/=5 ;
	cout<<"\nx/=5 : "<<x;
	x%=5 ;
	cout<<"\nx%=5 : "<<x;
	return 0 ;
}
