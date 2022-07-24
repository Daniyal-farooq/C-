#include<iostream>  // assuming that the marks are 100 in each subject
using namespace std ;
int main()
{
	float english , astronomy , astrology , avg ;
	cout<<"Enter your marks in Astronomy subject : " ;
	cin>>astronomy ;
	cout<<"Enter your mars in English subject : " ;
	cin>>english ;
	cout<<"Enter your marks in Astrology subject : " ;
	cin>>astrology ;
	avg = ( english + astronomy + astrology ) /3. ;
	if ( avg > 80. )
	{
		cout<<"You are above standard!\nAdmission granted." ;
	}
}
