#include<iostream>
using namespace std ;
struct book
{
	float price ;
	string author_name ;
};
float value ( book &reference )
{
	reference.price = reference.price * 2.0 ;
	return 0 ;
}
int main()
{
	book computer ;
	cout<<"Enter the price of the book : " ;
	cin>>computer.price ;
	cout<<"Enter the author name of the book : " ;
	cin>>computer.author_name ;
	value ( computer ) ;
	cout<<"\n\nAuthor name : "<<computer.author_name ;
	cout<<"\nBook price : "<<computer.price ;
	return 0 ;
}
