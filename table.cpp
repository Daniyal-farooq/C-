#include<iostream>
using namespace std;
int main()
{ 
  int loop = 1,number;
  cout<<"Enter a number to show it's table : ";
  cin>>number ;
  while ( loop <= 10 )
  {		cout<<"\n"<<number<<" * "<<loop<<" = "<< number * loop ;
  		loop ++ ;
  }
  
}
