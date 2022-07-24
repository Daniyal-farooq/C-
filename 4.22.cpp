#include<iostream>
using namespace std;
int main()
{
	
	float distance , speed ;
	cout<<"Enter distance in meters : " ;
	cin>>distance ;
	cout<<"Enter speed in meter per seconds : " ;
	cin>> speed ;
	cout<<"***Calclating time***\n" ;
	cout<<"The time in seconds required to reach your destination : "<< distance / speed ;
	return 0 ; 
}
