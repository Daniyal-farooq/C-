#include<iostream>
using namespace std ;
int main()
{
	int choice ;
	cout<<"1. Convert ASCII value to Character.\n2. Convert Character to ASCII value." ;
	cout<<"\nEnter your choice : " ;
	cin>>choice ;
	
	switch ( choice )
	{
		case 1:
			{
				int value ;
				cout<<"Enter ASCII value : " ;
				cin>> value ;
				cout<<"The Character value is : "<<char(value) ;
				break ;
			}
		case 2:
		    {
		    	char value ;
		    	cout<<"Enter the Character value : " ;
		    	cin>>value ;
		    	cout<<"The ASCII value is : "<<int(value) ;
		    	break ;
			}
		default :
			{
				cout<<"Invalid choice." ;
			
			}	
	}
	return 0 ;
}
