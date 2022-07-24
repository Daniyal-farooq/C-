#include<iostream>
using namespace std;
int main()
{
	int number ,subs ;
	cout<<"Enter a number : " ;
	cin >> number;
	for ( subs = number - 1 ; subs >= 1 ; subs -= 1 )
	{
		if ( number % subs == 0 )
		{
			cout<<"\nComposite number .";
			break;
		}
		else if (  subs = 1 )
		{
			cout<<"\nPrime number .";
			break;
		}
	}
	
}
