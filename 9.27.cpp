#include<iostream>
using namespace std ;
struct country
{
	string name ;
	float population ;
};
int show ( country first , country second )
{
	cout<<"\n\n****************************************************************************\n\n" ;
	if ( first.population > second.population )
	{
		cout<<first.name<<" has total population of "<<first.population<<" millions" ;
	}
	else if ( first.population < second.population )
	{
		cout<<second.name<<" has total population of "<<second.population<<" millions" ;
	}
}
int main()
{
	country first;
	cout<<"Enter country name : " ;
	cin>>first.name ;
	cout<<"Enter country population in millions : " ;
	cin>>first.population ;
	country second ;
	cout<<"Enter 2nd country name : " ;
	cin>>second.name ;
	cout<<"Enter 2nd country population in millions : " ;
	cin>>second.population ;
	show ( first , second ) ;
	return 0 ;
}

