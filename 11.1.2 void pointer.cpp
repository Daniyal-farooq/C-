#include<iostream>
using namespace std;
int main()
{
	int v1 = 1 ;
	float v2 = -33.4 ;
	double v3 = 44.5 ;
	char v4 = 'F' ;
	string v5 = "CYKA BLYAT" ;
	void *pointer ;
	pointer = &v1 ;
	cout<<"\nThe value of int varaible is : "<<v1 ; 
	cout<<"\nThe address of variable is : "<<pointer ;
	pointer = &v2 ;
	cout<<"\nThe value of float varaible is : "<<v2 ; 
	cout<<"\nThe address of float variable is : "<<pointer ;
	pointer = &v3 ;
	cout<<"\nThe value of double varaible is : "<<v3 ; 
	cout<<"\nThe address of double variable is : "<<pointer ;
	pointer = &v4 ;
	cout<<"\nThe value of char varaible is : "<<v4 ; 
	cout<<"\nThe address of char variable is : "<<pointer ;
	pointer = &v5 ;
	cout<<"\nThe value of string varaible is : "<<v5 ; 
	cout<<"\nThe address of string variable is : "<<pointer ;
	return 0 ;
	
}
