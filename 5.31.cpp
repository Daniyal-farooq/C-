#include<iostream>
using namespace std ;
int main()
{
	int choice , duration ;
	cout<<"1. Standard Adult Membership.\n2. Child Membership.\n3. Senior Citizen Membership.\n4. Quit the Program." ;
	cout<<"\n*****Select the Membership type.*****\n" ;
	cin>> choice ;
	cout<<"\n\nEnter the Number of months for your selected Membership : " ;
	cin>>duration;
	
	switch ( choice )
	{
		case 1:
			{
				cout<<"Your Membership charges ( Rs.50 per month ) are : "<< duration * 50 ;
				break;
			}
		case 2:
			{
				cout<<"Your Membership charges ( Rs.20 per month ) are : "<< duration * 20 ;
				break;
			}
		case 3:
			{
				cout<<"Your Membership charges ( Rs.30 per month ) are : "<< duration * 30 ;
				break;
			}
		case 4:
			{
				cout<<"Exiting the program." ;
			}			
	}
	return 0 ;

}
