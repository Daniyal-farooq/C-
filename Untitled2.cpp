#include<iostream>
#include<iomanip>
using namespace std ;
int bal = 50000;
int pass = 1234;
int wc;
int dc;
int w , d ;
void withdraw()
{
	
	for ( int l = 0 ; l <= 3 ; l++ )
	{
		cout<<"ENTER THE PASSCODE : ";
		cin>>pass;
		if ( pass == 1234 )
		{
		
			cout<<"****************************************************\n";
			cout<<"* 1. 1000\t2. 5000  \t3. 10000"<<setw(13)<<"*\n";
			cout<<"* 4. 25000\t5. 50000\t6. OTHER AMOUNT"<<setw(6)<<"*\n";
			cout<<"****************************************************\n\n";
			cin>>wc;
			if ( wc ==1 )
			{
				cout<<"**********************************************\n";
				cout<<"*    YOU TRANSACTED : 1000Rs.                *\n";
				cout<<"*    REMAINING BALANCE : "<<bal-1000<<"               *\n";
				cout<<"**********************************************\n\n";
				bal = bal -1000;
				break;
			}
			else if (wc == 2)
			{
				cout<<"**********************************************\n";
				cout<<"*    YOU TRANSACTED : 5000Rs.                *\n";
				cout<<"*    REMAINING BALANCE : "<<bal-5000<<"               *\n";
				cout<<"**********************************************\n\n";
				bal = bal - 5000;
				break;
			}
			else if (wc == 3)
			{
				cout<<"**********************************************\n";
				cout<<"*    YOU TRANSACTED : 10000Rs.               *\n";
				cout<<"*    REMAINING BALANCE : "<<bal-10000<<"               *\n";
				cout<<"**********************************************\n\n";
				bal = bal - 10000;
				break;
			}
			else if (wc == 4)
			{
				cout<<"**********************************************\n";
				cout<<"*    YOU TRANSACTED : 25000Rs.               *\n";
				cout<<"*    REMAINING BALANCE : "<<bal-25000<<"               *\n";
				cout<<"**********************************************\n\n";
				bal = bal - 25000;
				break;
			}
			else if (wc == 5)
			{
				cout<<"**********************************************\n";
				cout<<"*    YOU TRANSACTED : 50000Rs.               *\n";
				cout<<"*    REMAINING BALANCE : "<<bal-50000<<"                   *\n";
				cout<<"**********************************************\n\n";
				bal = bal - 50000;
				break;
			}
			else if (wc==6)
			{
				
				cout<<"\n\nENTER THE AMOUNT TO BE WITHDRAWN : ";
				cin>>w;
				cout<<"**************************************************\n";
				cout<<"        YOU TRANSACTED : "<<w<<"Rs.\n";
				cout<<"        REMAINING BALANCE : "<<bal-w<<"\n";
				cout<<"**************************************************\n\n";
				bal = bal - w ;
				break;
			}
			else
			{
				cout<<"INVALID CHOICE.\n";
			}
		}
		else
		{
				cout<<"**************************************************\n\n";
				cout<<"INCORRECT PASSCODE.\n";
				cout<<"YOU HAVE "<<3-l<<" LIMITS.\n\n";
				cout<<"**************************************************\n\n";
		}
			
	}
	
}
void deposit()
{
	cout<<"ENTER THE PASSCODE : ";
	cin>>dc;
	if(dc == pass)
	{
		cout<<"**********************************************\n";
		cout<<"ENTER THE AMOUNT TO BE DEPOSITED : ";
		cin>>d;
		cout<<"**********************************************\n";
		bal = bal + d;
	}
	
}
void balance()
{
}
void exit()
{
}
int main()
{
	int choice ;
	bool boolean = true;
	while( boolean == true)
	{
		cout<<"***************************************************\n";
		cout<<"*"<<setw(25)<<"1. WITHDRAW"<<setw(26)<<"*\n";
		cout<<"*"<<setw(24)<<"2. DEPOSIT"<<setw(27)<<"*\n";
		cout<<"*"<<setw(32)<<"3. BALANCE INQUIRY"<<setw(19)<<"*\n";
		cout<<"*"<<setw(21)<<"4. EXit"<<setw(30)<<"*\n";
		cout<<"***************************************************\n";
		cin>>choice ;
	 	switch (choice)
	 	{
	 		case 1 :
	 			withdraw();
	 			break;
	 		case 2 :
			 	deposit();
				break;
			case 3 :
				balance();
				break;
			case 4 :
				exit();
				break;
			default :
				cout<<"INVALID CHOICE.";			 	
	 	}
		
	}
}
