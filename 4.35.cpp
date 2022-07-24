#include<iostream>
using namespace std ;
int main()
{
	float electricity , gas , petrol ; // current rates to be entered by the user
	cout<<"Enter the current rate of electricity : " ;
	cin>>electricity ;
	cout<<"Enter the current rate of gas : " ;
	cin>>gas ;
	cout<<"Enter the current rate of petrol : " ;
	cin>>petrol ;
	electricity = electricity + ( electricity / 10. ) ;	
	gas = gas + ( gas / 10. ) ;
	petrol = petrol + ( petrol / 10. ) ;
	cout<<"New electricity rate : "<<electricity ;
	cout<<"\nNew gas rate : "<<gas ;
	cout<<"\nNew petrol rate : "<<petrol ;
	return 0 ;
}
