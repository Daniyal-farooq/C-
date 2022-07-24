#include<iostream>
using namespace std;
struct book
{
	int bookid;
	int bookpages;
	float bookprice;
};
int main()
{
	book array[5];
	float costly = 0. ;
	for ( int o = 0 ; o < 5 ; o ++)
	{
		cout<<"Enter ID of book #"<<o+1<<" : " ;
		cin>>array[o].bookid ;
		cout<<"Enter pages of book #"<<o+1<<" : " ;
		cin>>array[o].bookpages ;
		cout<<"Enter price of book #"<<o+1<<" : " ;
		cin>>array[o].bookprice ;
		cout<<endl;
		if ( costly < array[o].bookprice )
		{
			costly = array[o].bookprice ;
		}
	}
	for ( int o = 0 ; o < 5 ; o++ )
	{
		if ( costly == array[o].bookprice )
		{
			cout<<"The record of most costly book(book#"<<o+1<<") are given below ; \n\n";
			cout<<"\nID of book is "<<array[o].bookid ;
			cout<<"\nTotal pages of book are "<<array[o].bookpages ;
			cout<<"\nPrice of book is "<<array[o].bookprice ;
		}
	}
}
