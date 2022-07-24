#include<iostream>
#include<iomanip>
using namespace std ;
struct cricket
{
	string name ;
	int runs ;
	int innings ;
	int timesnotout ;
};
int display ( cricket array[5] )
{
	cout<<endl<<endl<<setw(40)<<"Cricket statistics:\n" ;
	cout<<"_____________________________________________________________________________\n";
	cout<<setw(4)<<"Name"<<setw(10)<<"Runs"<<setw(15)<<"Innings"<<setw(17)<<"Timesnotout\n" ;
	cout<<"_____________________________________________________________________________\n";
	for ( int o = 0 ; o < 5 ; o ++ )
	{
		cout<<setw(10)<<left<<array[o].name<<setw(15)<<left<<array[o].runs<<setw(12)<<left<<array[o].innings<<setw(18)<<left<<array[o].timesnotout<<endl ;
	}
	return 0 ;
}
int main()
{
	cricket array[5] ;
	cout<<"Enter the data for five cricketers.\n" ;
	for ( int o = 0 ; o <5 ; o++ )
	{
		cout<<"Enter name of cricketer : " ;
		cin>>array[o].name ;
		cout<<"Enter runs of cricketer : " ;
		cin>>array[o].runs ;
		cout<<"Enter innings played by the cricketer : " ;
		cin>>array[o].innings ;
		cout<<"Enter times the cricketer was not out : " ;
		cin>> array[o].timesnotout ;
	}
	display ( array ) ;
	return 0 ;
}
