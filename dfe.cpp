#include<iostream>
using namespace std;
int main()
{ int number,fact = 1,loop;
  cout<<"Enter anumber to show it's factorial : ";
  cin>>number ;
  loop = number  ;
  while ( loop >= 1 )
  {	
    fact =fact * loop;
    loop --;
  }
  cout<<"\nFactorial of "<<number<<" is : "<<fact ;
}
