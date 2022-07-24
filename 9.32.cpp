#include<iostream>
using namespace std ;
struct book 
{
	string author_name ;
	int pages ;
	float price ;
};
book costly ( book first , book second ) 
{
	if ( first.price > second.price )
	{
		return first ;
	}
	else if ( second.price > first.price )
	{
		return second ;
	}
}
int main()
{
	book first ;
	book second ;
	book return_storer_variable ;
	for ( int o = 0 ; o < 2 ; o ++ )
	{
		if ( o == 0 )
		{
			cout<<"\n\n********ENTER DATA OF FIRST BOOK********\n\n" ;
			cout<<"Enter first book's author name : " ;
			cin>>first.author_name ;
			cout<<"Enter first book's page quantity : ";
			cin>>first.pages ;
			cout<<"Enter first book's price in dollars : ";
			cin>>first.price ;
		}
		else if ( o == 1 )
		{
			cout<<"\n********ENTER DATA OF SECOND BOOK********\n\n" ;
			cout<<"Enter second book's author name : " ;
			cin>>second.author_name ;
			cout<<"Enter second book's page quantity : ";
			cin>>second.pages ;
			cout<<"Enter second book's price in dollars : ";
			cin>>second.price ;
		}
		
	}
	return_storer_variable  = costly ( first , second ) ;
	cout<<"\n********DATA OF COSTLY BOOK IS GIVEN BELOW********\n\n" ;
	cout<<"Book Author name is "<<return_storer_variable.author_name<<"." ;
	cout<<"\nBook has "<<return_storer_variable.pages<<" pages." ;
	cout<<"\nBook's price is "<<return_storer_variable.price<<"$." ;
	return 0 ;
} 
