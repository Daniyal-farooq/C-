#include<iostream>
using namespace std ;
int main()
{
	int p_amount , interest_rate , time , interest ;
	cout<<"Please enter the principal amount : " ;
	cin>>p_amount ;
	cout<<"Please enter the interest rate per year : " ;
	cin>>interest_rate ;
	cout<<"Pleae enter the time in years : " ;
	cin>>time ;
	interest =  ( ( ( p_amount / 100 ) * interest_rate ) * time ) ;
	cout<<"The compound interest amount is : "<<interest ;
	p_amount = p_amount + interest ;
	cout<<"\nThe total amount is : "<<p_amount ;
	return 0 ;
}
