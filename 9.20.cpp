#include<iostream>
using namespace std;
int height ;
int multi ( ) 
{
	return height*2 ;
}
int main()
{
	cout<<"Enter height of the object : " ;
	cin>>height ;
	cout<<multi ( ) ;
	return 0 ;
}
