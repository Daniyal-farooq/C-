#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float aside , bside ,cside , s , area ;
	cout<<"Enter a side of thr triangle : " ;      //we will use built in function in math.h library
	cin>> aside ;
	cout<<"Enter b side of thr triangle : " ;
	cin>> bside ;
	cout<<"Enter c side of thr triangle : " ;
	cin>> cside ;
	s = ( aside + bside + cside ) / 2.0 ;
    area = pow( s*( s - aside ) * ( s - bside ) * ( s - cside ) , 0.5 ) ;
    cout<<"Area of triangle is : "<<area ;
    return 0 ;
}
