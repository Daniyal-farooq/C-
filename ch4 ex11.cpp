
#include<iostream>
using namespace std;
int main()
{
	int number , a , b  ;
	cout<<"Enter a 3-digit number of your choice : " ;
    cin>>number ;
    a      = number / 100 ;
    number = number % 100 ;
    b      = number / 10  ;
    number = number % 10  ;
    cout<<a<<endl<<b<<endl<<number ;
	return 0 ;
}
