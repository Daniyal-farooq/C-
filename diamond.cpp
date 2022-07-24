#include<iostream>
using namespace std;
int main()
{
	/*int l ;
	cout<<"Enter the length of the diamond : ";
	cin>>l ;*/
	//5 size diamond
	int l ;
	cout<<"Enter length : ";
	cin>>l;
	
	for ( int o = 0 ; o <= l ; o++ )
	{
		for ( int i = 0 ; i <= l-o  ; i++ )
			cout<<" ";
		for ( int i = 0 ; i <= o ; i++ )
			cout<<" *";
		cout<<endl;		
	}
	for ( int o = 0 ; o <= l ; o++ )
	{
		for ( int i = -1 ; i <= o  ; i++ )
			cout<<" ";
		for ( int i = 1 ; i <= l-o ; i++ )
			cout<<" *";
		cout<<endl;		
	}

}
