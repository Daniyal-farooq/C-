#include<iostream>
using namespace std;
int out(int n ,char c );
int main()
{
	int n ;
	char c;
	cout<<"Enter a characters : ";
	cin>>c;
	cout<<"Enter times you wanna display it : ";
	cin>>n;
	out(n,c) ;
	return 0 ;
}
inline int out (int n , char c)
{
	for (int a = 0 ; a < n ; a ++ )
	{
		for (int b = 0 ; b < n ; b ++ )
		{
			cout<<c;
		}
		cout<<endl;
	}
}
