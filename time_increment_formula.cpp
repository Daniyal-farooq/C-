#include<iostream>
// a program to input time and then input increment in seconds and then shows it
// imp formula for understandings
using namespace std;
int main()
{
	int hours , minutes , seconds , inc_s ;
	cout<<"Enter hour min sec " ;
	cin>>hours>>minutes>>seconds ;
	cout<<"Enter increment in seconds ;" ;
	cin>>inc_s ;
	seconds += inc_s ;
	if ( seconds / 60 > 0 )
	{
		minutes += seconds / 60 ;
		seconds = seconds % 60 ;
		if ( minutes/60 > 0 )
		{
			hours += minutes / 60 ;
			minutes = minutes % 60 ;
			hours = hours % 60 ;
		}
		
	}
	cout<<hours<<" : "<<minutes<<" : "<<seconds<<endl ;

	return 0 ;
}
