#include<iostream>
using namespace std ;
int main()
{
	float salary_pkr , dearness_bonus , rent_bonus;
	cout<<"Please enter your salary in pkr : " ;
	cin>> salary_pkr ;
	dearness_bonus = ( salary_pkr/100 * 35 ) ;
	rent_bonus     = ( salary_pkr/100 * 25 ) ;
	salary_pkr     = salary_pkr + dearness_bonus + rent_bonus      ;
	cout<<"The 35% dearness bonus in pkr is : "<<dearness_bonus ;
	cout<<"\nThe 25% home rent bonus in pkr is : "<<rent_bonus  ;
	cout<<"\nThe gross salary in pkr is : "<<salary_pkr ;
	return 0 ; 
}
