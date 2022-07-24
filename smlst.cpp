#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	int first,second,third;
	cout<<"Enter first number : ";
	cin>>first;
	cout<<"Enter second number : ";
	cin>>second;
	cout<<"Enter third number : ";
	cin>>third;
	if (!( first == second && first == third))
	{
		cout<<first<<second<<third;
		cout<<"\n"<<first<<third<<second;
		cout<<"\n"<<second<<first<<third;
		cout<<"\n"<<second<<third<<first;
		cout<<"\n"<<third<<first<<second;
		cout<<"\n"<<third<<second<<first;	}
	else if ((first == second  ))
	{
		cout<<first<<second<<third;
		cout<<"\n"<<first<<third<<second;
		//cout<<"\n"<<second<<first<<third;
		cout<<"\n"<<second<<third<<first;
		cout<<"\n"<<third<<first<<second;
		//cout<<"\n"<<third<<second<<first;   }
										      }
	else if ((first == third ))
	{	cout<<first<<second<<third;
		cout<<"\n"<<first<<third<<second;
		//cout<<"\n"<<second<<first<<third;
		cout<<"\n"<<second<<third<<first;
		//cout<<"\n"<<third<<first<<second;
		cout<<"\n"<<third<<second<<first;	   }
	if ( third == second)
	{
		cout<<first<<second<<third;
		//cout<<"\n"<<first<<third<<second;
		cout<<"\n"<<second<<first<<third;
		cout<<"\n"<<second<<third<<first;
		cout<<"\n"<<third<<first<<second;
		//cout<<"\n"<<third<<second<<first;	}
		 									}
}
