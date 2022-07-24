#include<iostream>
using namespace std;
inline sum ( int a , int b , int c = 10 , int d = 20 )
{
	return a + b + c + d ;
}
int main()
{
	cout<<"The sum of 3,6,7,0 is : "<<sum ( 3 , 6  ) ;
	return 0;
}
