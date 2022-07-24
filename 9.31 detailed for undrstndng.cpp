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
	t.seconds = t.seconds + sec ;  // saves increment in total seconds
	if ( t.seconds / 60 > 0 )      // if new totalseconds/60 is greater than 0 then it should add quotient in minutes
	{
		t.minutes = t.minutes + t.seconds / 60 ;     //adds the remainder of totaal seconds in minutes
		t.seconds = t.seconds % 60 ;                 //total seconds %= 60
		if ( t.minutes/60 > 0 )					//if total minutes/60 is greater than 0 then it should add quotient in hours
		{
			t.hours = t.hours + t.minutes / 60 ; // adds quotient
			t.minutes = t.minutes % 60 ;         // total minutes %= 60
			t.hours = t.hours % 24 ;              //keeps total hours in 24 limit
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
