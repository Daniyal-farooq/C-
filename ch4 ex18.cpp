#include<iostream>
using namespace std ;
int main()
{
	float radius , theta , area ;
	cout<<"Enter the value of radius : " ;
	cin>>radius ;
	cout<<"Enter the value of theta : " ;
	cin>>theta ;
	area =  ( theta * radius * radius ) / 2.0 ;
	cout<<"The area of sector of the circle is : "<<area ;
	return 0 ;
}
/*
 Area of a sector of a circle = (theta × r2 )/2 
 where theta is measured in radians.
*/
