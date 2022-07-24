#include<iostream>
using namespace std ;
int main()
{
	float n1 , n2 , n3 , swapper ;
	cout<<"Enter the value of the first variable : " ;
	cin>>n1 ;
	cout<<"Enter the value of the second variable : " ;
	cin>>n2 ;
	cout<<"Enter the value of the third variable : " ;
	cin>>n3 ;
	cout<<"****BEFORE SWAPPING****\n" ;
	cout<<"First variable : "<<n1 ;
	cout<<"\nSecond variable : "<<n2 ;
	cout<<"\nThird variable : "<<n3 ;
	swapper = n1 ;
	n1 = n2 ;
	n2 = n3 ;
	n3 = swapper ;
	cout<<"\n****AFTER SWAPPING****\n" ;
	cout<<"First variable : "<<n1 ;
	cout<<"\nSecond variable : "<<n2 ;
	cout<<"\nThird variable : "<<n3 ;
	return 0 ;
}
