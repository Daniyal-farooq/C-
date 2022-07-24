#include<iostream>
using namespace std;
struct student
{
	char institute[20] ;
	int marks ;
	int age ;
	float gpa ;
};
int get_data ( student *Asif )
{
	cout<<"Enter the name of the institute : " ;
	cin.get( Asif->institute , 20 ) ;
	cout<<"Enter the marks of student : " ;
	cin>>Asif->marks ;
	cout<<"ENter the age of the student : " ;
	cin>>Asif->age ;
	cout<<"Enter the gpa of the student : " ;
	cin>>Asif->gpa ;
	return 0 ;
}
int display_data ( student *Asif )
{
	cout<<"YOur entered data is give below..,\n\n" ;
	cout<<"Institute : "<<Asif->institute ;
	cout<<"\nMarks : "<<Asif->marks ;
	cout<<"\nAge : "<<Asif->marks ;
	cout<<"\nGPA : "<<Asif->gpa ;
	return 0 ;
}
int main()
{
	student Asif ;
	get_data ( &Asif ) ;
	display_data( &Asif ) ;
	return 0 ;
}
