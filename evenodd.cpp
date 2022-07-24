#include<iostream>
#include<math.h>
using namespace std;
int main()
{	float consumed,total,costperunit;
	cout<<"Enter consumed units : ";
	cin>>consumed;
	if( consumed <= 300.0 )
		costperunit = 2.0;
	else if(consumed > 300.0 && consumed <= 500.0)
		costperunit = 5.0;			
	else if(consumed > 500.0 )
		costperunit = 7.0;
	total = consumed * costperunit;
	if( total > 2000.0 )		
	{
		total = total + (total / 100.0 * 5.0);
		total = total + 150.0;    }
		cout<<"Total bill is "<<total<<" Rs.";
		}

