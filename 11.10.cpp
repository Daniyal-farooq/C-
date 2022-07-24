#include<iostream>
using namespace std;
struct time 
{
	int hours ;
	int minutes ;
	long seconds ;    //use long data type because seconds can be in larger amount.
};
int converter ( time *now ) //using pointer with the same name for convenience
{
	if ( now->seconds/60 > 0  )
	{
		now->minutes = now->minutes + now->seconds/60 ;
		now->seconds = now->seconds%60 ;
		if ( now->minutes/60 > 0 )
		{
			now->hours = now->hours + now->minutes/60 ;
			now->minutes = now->minutes%60 ;
			now->hours = now->hours%24 ;
		}
	}
}
int main()
{
	time now ;
	now.hours = 0 ;
	now.minutes = 0 ;
	now.seconds = 0 ;
	cout<<"Enter seconds to convert into hours:minutes:seconds format : " ;
	cin>>now.seconds ;
	converter ( &now ) ;
	cout<<"The seconds converted into hours:minute:seconds format are given below..,\n\n" ;
	cout<<now.hours<<" : "<<now.minutes<<" : "<<now.seconds ;
	return 0 ;
}
