#include<iostream>
using namespace std ;
struct time
{
	int hours ;
	int minutes ;
	int seconds ;
};
int set( time &t )
{
	cout<<"Enter hours : " ;
	cin>>t.hours;
	cout<<"Enter minutes : " ;
	cin>>t.minutes ;
	cout<<"Enter seconds : " ;
	cin>>t.seconds ;
	return 0 ;
}
int inc ( time &t )
{
	int sec , min , hour ;
	cout<<"\nEnter increment in seconds : " ;
	cin>>sec ;
	t.seconds = t.seconds + sec ;
	if ( t.seconds / 60 > 0 )
	{
		t.minutes = t.minutes + t.seconds / 60 ;
		t.seconds = t.seconds % 60 ;
		if ( t.minutes/60 > 0 )
		{
			t.hours = t.hours + t.minutes / 60 ;
			t.minutes = t.minutes % 60 ;
			t.hours = t.hours % 24 ;
		}
	}
	
}
int display ( time &t )
{
	cout<<t.hours<<" : "<<t.minutes<<" : "<<t.seconds<<endl ;
	
}
int main()
{
	time now ;
	set ( now ) ;
	display ( now ) ;
	inc ( now ) ;
	display( now ) ;
	inc ( now ) ;
	display ( now ) ; 
	return 0 ;	
}
