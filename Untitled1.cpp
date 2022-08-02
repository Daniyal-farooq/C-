#include<iostream>
#include<iomanip>
using namespace std ;
int x;
void withdraw()
{
	cout<<"****************************************************\n";
	cout<<"* 1. 1000\t2. 5000  \t3. 10000"<<setw(13)<<"*\n";
	cout<<"* 4. 25000\t5. 50000\t6. OTHER AMOUNT"<<setw(6)<<"*\n";
	cout<<"****************************************************\n";
	cin>>x;
}
void deposit()
{
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
		cout<<"****************************************\n";
		cout<<"*"<<setw(20)<<"1. WITHDRAW"<<setw(20)<<"*\n";
		cout<<"*"<<setw(19)<<"2. DEPOSIT"<<setw(21)<<"*\n";
		cout<<"*"<<setw(27)<<"3. BALANCE INQUIRY"<<setw(13)<<"*\n";
		cout<<"*"<<setw(16)<<"4. EXit"<<setw(24)<<"*\n";
		cout<<"****************************************\n";
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
