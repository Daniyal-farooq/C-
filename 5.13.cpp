#include<iostream>
#include<math.h>
using namespace std;
int main()
{	
	float bill,min,calls;
	cout<< "Enter your total calls dialed *ATLEAST 100 CALLS* : ";
	cin>> calls;
	min = calls;
	if( calls <= 100.0 )
		bill = 20.0 * calls;
	else if ( calls > 100.0 && calls <= 150.0)
		bill = 200.0 + ( calls * 0.60);
	else if ( calls > 150.0 && calls <= 200.0 )
		bill = 200.0 + 30.0 + ( calls * 0.50);
	else if ( calls > 200.0 )
		bill = 200.0 + 30.0 + 25.0 + ( calls * 0.50);
	cout<<"Total bill is : "<<bill;
	
	}
 
