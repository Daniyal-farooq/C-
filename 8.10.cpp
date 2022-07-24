#include<iostream>
using namespace std;
struct Teacher
{
	int Tid ;
	string Tname ;
	float Tsalary ;
	
};
Teacher b[4];  //it will have an array of 4 struct variables ..each cconsisting of three struct member variables
int main()
{
	int enteredtid ;
	for ( int o = 0 ; o < 4 ; o++ )
	{
		cout<<"Enter id of Teacher"<<o+1<<" : " ;
		cin>>b[o].Tid ;
		cout<<"Enter name of Teacher"<<o+1<<" : " ;
		cin>>b[o].Tname ;
		cout<<"Enter salary of Teacher"<<o+1<<" : " ;
		cin>>b[o].Tsalary ;
	}
	cout<<"Enter id of Teacher to show it's record : " ;
	cin>>enteredtid ;
	for ( int o = 0 ; o < 4 ; o ++ )
	{
		if ( enteredtid == b[o].Tid )
		{
			cout<<"\nThe Record is given below . \nTeacher id = "<<b[o].Tid ;
			cout<<"\nTeacher name = "<<b[o].Tname ;
			cout<<"\nTeacher salary = "<<b[o].Tsalary ;
		}
	}
	return 0 ;
}
