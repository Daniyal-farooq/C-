#include<iostream>
using namespace std;
int main()
{
	int n , a , b , c , d , e ;
	cout<<"Enter a FIVE digit number : " ;
	cin>>n ;									// getting number
	cout<<"\n\nYour entered number : " <<n ;	
	a  = n / 10000 ;			   // 1)since it is 3 digit so we divide by 100 
	n  = n % 10000 ;			   //   to store divisor 100s value in a variable
	b  = n / 1000  ;
	n  = n % 1000  ;			   // 2)then store remainder in n variable 
	c  = n / 100   ;			   // 3)then divide n by 10s to store units value in b. 4)then store 
	n  = n % 100   ;
	d  = n / 10    ;
	n  = n % 10    ;
	//e  = n / 10    ;
	//n  = n % 10    ;
	cout<<"\nYour entered number in reverse order : "<<n<<d<<c<<b<<a ;  //units value in c 
	return 0;
}
