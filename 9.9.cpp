#include<iostream>
using namespace std;
int compar(int a,int b,char c);
int main()
{
	int a,b ;
	char c;
	cout<<"Enter a number  : ";
	cin>>a;
	cout<<"\nEnter a number  : ";
	cin>>b;
	cout<<"Enter a operator  : ";
	cin>>c;
	compar(a,b,c) ;
	return 0 ;
}
compar( int a,int b , char  c )
{
	switch(c)
	{
		case '+':
		cout<<"The sum is : "<<a+b;
		break;
		case '-':
		cout<<"The subtraction is : "<<a-b;
		break;
		case '*':
		cout<<"The product is : "<<a*b;
		break;
		case '%':
		cout<<"The mod is : "<<a%b;
		break ;
	}
}
