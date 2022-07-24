#include<iostream>
using namespace std;
struct Result
{
	float marks ;
	char grade ;
};
struct Record
{
	int rollno ;
	Result x ;
};
int main()
{
	Record Dani ;
	cout<<"Enter Rollno of Dani : ";
	cin>> Dani.rollno ;
	cout<<"Enter marks of Dani : " ;
	cin>>Dani.x.marks ;
	cout<<"Enter grade if Dani : " ;
	cin>> Dani.x.grade ;
	//displaying
	cout<<"The records of Dani are given below ; \n\n" ;
	cout<<"\nRollno of Dani is : "<<Dani.rollno ;	
	cout<<"\nMarks of Dani are : "<<Dani.x.marks ;
	cout<<"\nGrade of Dani is : "<<Dani.x.grade ;
	return 0 ;
}
