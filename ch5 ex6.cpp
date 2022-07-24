#include<iostream>
#include<iomanip>
using namespace std ;
int main()
{
	int choice ;
	cout<<setw(4)<<"Code"<<"\t\t"<<setw(22)<<"Disk drive manufacture\n";
	cout<<setw(4)<<1     <<"\t\t   "<<"Western Digital\n" ;
	cout<<setw(4)<<2     <<"\t\t   "<<"3M Corporation\n" ;
	cout<<setw(4)<<3     <<"\t\t   "<<"Maxell Corporation\n" ;
	cout<<setw(4)<<4     <<"\t\t   "<<"Sony Corporation\n" ;
	cout<<setw(4)<<5     <<"\t\t   "<<"Verbatim Corporation\n" ;
	cout<<"Enter the code of the manufacturer : " ;
	cin>>choice ;
	switch (choice)
	{
		case 1 :
			{
				cout<<"Western Digital" ;
				break ;
			}
		case 2 :
			{
				cout<<"3M Corporation" ;
				break ;
			}
		case 3 :
			{
				cout<<"Maxell Corporation" ;
				break ;
			}
		case 4 :
			{
				cout<<"Sony Corporation" ;
				break ;
			}
		case 5 :
			{
				cout<<"Verbatim Corporation" ;
				break ;
			}				
	}
	return 0 ;
}
