#include<iostream>
#include<conio.h>
using namespace std;
void myfunction() ;
int main()
{
	myfunction();
	return 0 ;
}
void myfunction() 
{
	int n1,n2,n3,sum = 0  ;
	float avg  ;
	cout<<"Enter value of variable : " ;
	cin>>n1 ;
	cout<<"Enter value of variable : " ;
	cin>>n2 ;
	cout<<"Enter value of variable : " ;
	cin>>n3 ;
	sum = n1 + n2 + n3 ;
	avg = sum / 3 ;
	cout<<"\n The sum of numbers is : "<<sum ;
	cout<<"\nThe average of numbers is : "<<avg ;
}
