#include<iostream>
using namespace std;
int main()
{
	int days_per_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31} ;
	int day , month, total_days = 0 , days_till_entered = 0 ;
	
	cout<<"Enter the month : " ;
	cin>>month ;
	cout<<"Enter the day : " ;
	cin>>day ;
	
	for ( int l = 0 ; l < month-1 ; l++ )
	{
		total_days =total_days + days_per_month[l] ;
	}
	total_days = total_days + day ;
	
	cout<<"Days till entered date : "<<total_days ;
}
