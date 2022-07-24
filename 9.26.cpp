#include<iostream>
using namespace std;
struct student
{
	float marks;			//  declare struct before all functions so compiler knows struct variables 
	char grade ;			//  used in the functions
};
float display ( student mike );
int main()
{
	student mike;
	cout<<"Enter marks of Mike : ";
	cin>>mike.marks ;
	cout<<"Enter grade of mike : ";
	cin>>mike.grade ;
	display ( mike ) ;
	return 0 ;
}
float display ( student mike )
{
	cout<<"The entered data of Mike will be displayed here : ";
	cout<<"\n\nMarks of the student mike are "<<mike.marks ;
	cout<<"\nGrade of student mike is "<<mike.grade ;
	return 0.0 ;
}
