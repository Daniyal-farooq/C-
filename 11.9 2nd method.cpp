#include<iostream>
using namespace std;
struct student
{
	char name[20] ;
	int age ;
	float gpa ;
};
void get_data ( student &x , student *ptr )
{
	cout<<"Enter the name of the student : " ;
	cin.get( ptr->name , 20 ) ;
	cout<<"Enter tha age of the student : ";
	cin>>ptr->age ;
	cout<<"Enter the gpa of the student : " ;
	cin>>ptr->gpa ;
}
void display_data ( student &x , student *ptr )
{
	cout<<"The data of the student you entered is given below..;\n\n" ;
	cout<<"Name: "<<ptr->name ;
	cout<<"\nAge: "<<ptr->age ;
	cout<<"\nGPA: "<<ptr->gpa ;
}
int main()
{
	student x , *ptr ;
	ptr = &x;
	get_data ( x , ptr ) ;
	display_data ( x , ptr ) ;
	return 0 ;
}
