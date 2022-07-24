#include<iostream>
using namespace std ;
struct book 
{
	char author_name[20] ;
	int pages ;
	float price_$ ; 
};
int main()
{
	book space , *ptr ;
	ptr = &space ;                                   //store addresses of member variables of pace in a pointer
	cout<<"Enter authorname : " ;					// get input
	cin.get ( ptr->author_name , 20 ) ;
	cout<<"Enter number of book pages : " ;
	cin>>ptr->pages ;
	cout<<"Enter the price of book in dollars : " ;
	cin>>ptr->price_$ ;
	// displaying using pointer
	cout<<"\nYour entered data is given below..\n\n" ;
	cout<<"Author : "<<ptr->author_name ;
	cout<<"\nPages : "<<ptr->pages ;
	cout<<"\nPrice : "<<ptr->price_$ ;
	return 0 ;
}
