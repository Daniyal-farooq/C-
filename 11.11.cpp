#include<iostream>
using namespace std;
int main()
{
	int* pointer ;
	pointer = new int ;
	cout<<"Enter a value of integer type : " ;
	cin>>*pointer ;
	cout<<"You entered the value "<<*pointer<<" which is stored at address "<<pointer ;
	return 0 ;
}
