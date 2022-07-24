#include<iostream>
using namespace std;
int main()
{
	int s1 , m1 ,h1 , s2 ,m2 ,h2 ;
	cout<<"Enter the seconds of first time : " ;
	cin>>s1 ;
	cout<<"Enter the minutes of first time : " ;
	cin>>m1 ;
	cout<<"Enter the hours of first time : " ;
	cin>>h1 ;
	cout<<"Enter the seconds of first time : " ;
	cin>>s2 ;
	cout<<"Enter the minutes of first time : " ;
	cin>>m2 ;
	cout<<"Enter the hours of first time : " ;
	cin>>h2 ;
	s1 = s1 + s2 ;               //adding seconds
	m1 = m1 + m2 + ( s1 / 60 ) ; //adding minutes and transerring remainder minutes from seconds
	h1 = h1 + h2 + ( m1 / 60 ) ; //adding hours and transferring remainder hours from minutes
	s1 = s1 % 60 ;               // keeping seconds under 60
	m1 = m1 % 60 ;				 // keeping minutes under 60
	cout<<"HH-MM-SS\n" ;
	cout<<h1<<"-"<<m1<<"-"<<s1 ;
	
	return 0 ;
}
