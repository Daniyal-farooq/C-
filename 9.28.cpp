#include<iostream>
using namespace std;
struct time 
{
	int hours ;
	int minutes ;
	int seconds ;
};
int add ( time array[2] )
{
	int x , ts , tm , th ;			//th means total hours   and same for tm and ts
	ts = array[0].seconds + array[1].seconds ;
	x = ts / 60 ;
	tm = array[0].minutes + array[1].minutes + x ;
	ts = ts % 60 ;
	th = array[0].hours + array[1].hours + tm / 60 ;
	tm = tm % 60 ;
	cout<<th<<" : "<<tm<<" : "<<ts ;
	return 0 ;
}
int main (  )
{
	time array[2] ;   //first time data input
	cout<<"Enter first time's hours : " ;
	cin>>array[0].hours ;
	cout<<"Enter first time's minutes : " ;
	cin>>array[0].minutes ;
	cout<<"Enter first time's seconds : " ;
	cin>>array[0].seconds ;
	cout<<"Enter second time's hours : " ;
	cin>>array[1].hours ;   //second time data input
	cout<<"Enter second time's minutes : " ;
	cin>>array[1].minutes ;
	cout<<"Enter second time's seconds : " ;
	cin>>array[1].seconds ;
	add ( array ) ;
	return 0 ;
}
