#include<iostream>
#include<math.h>
using namespace std ;
int main()
{
	float x1 , x2 , y1 , y2 , distance ;
	cout<<"Enter x coordinate of 1st point : " ;
	cin>>x1 ;
	cout<<"Enter y coordinate of 1st point : " ;
	cin>>y1 ;
	cout<<"Enter x coordinate of 2nd point : " ;
	cin>>x2 ;
	cout<<"Enter y coordinate of 2nd point : " ;
	cin>>y2 ;
	distance = pow( pow( x2 - x1 , 2 ) + pow( y2 - y1 , 2 ) , 0.5 ) ;
	cout<<"The distance between the two given points is : "<<distance ;
	return 0;
}
