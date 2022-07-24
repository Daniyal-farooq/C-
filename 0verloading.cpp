#include<iostream>
using namespace std;
int add ( int a , int b)
{
	cout<<"\n1st case\n";
	return a+b;
}
double add ( int a , double b )
{
	cout<<"\n2nd case\n";
	return a+b;
}
double add (double a , int b)
{
	cout<<"\n3rd case\n";
	return a+b;
}
int add (int a , int b ,int c )
{
	cout<<"\n4th case\n";
	return a+b+c ;
}
double add (double a , double b, double c)
{
	cout<<"\n5th case\n";
	return a+b+c;
}
int main()
{
	cout<<"Adding 5 , 10 : "<<add ( 5,10);
	cout<<"Adding 1 , 2.5 : "<<add ( 1,2.5);
	cout<<"Adding 2.5 , 3 : "<<add ( 2.5,3);
	cout<<"Adding 1 , 2 , 3 : "<<add ( 1,2,3);
	cout<<"Adding 1.0 , 2.5 , 3.5 : "<<add ( 1.0,2.5,3.5);
	return 0 ;
}

