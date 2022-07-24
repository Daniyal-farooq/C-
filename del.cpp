#include<iostream>
#include<math.h>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{	char code;
	cout<<"A for Adventure movies\nC for Comedy movies\nF for Family movies \nH for Horror movies \nS for Science Fiction movies\n";
	cout<<"\n\nEnter code of your selection of catergory  ";
	cin>>code;
	switch ( code )
	{	case 'A':
		cout<<"\nAdventure movies.";
		break;	
		case 'C':
		cout<<"\nComedy movies.";
		break;
		case 'F':
		cout<<"\nFamily movies.";
		break;
		case 'H':
		cout<<"\nHorror movies.";
		break;
		case 'S':
		cout<<"\nSci-Fi movies.";
		break;
	}


	
}
		


