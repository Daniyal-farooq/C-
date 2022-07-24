#include<iostream>
using namespace std;
struct student
{
	int Roll_No ;
	int Marks ;
	float Average ;
	char grade ;	
};
int main()
{
	student amir;
	cout<< "Enter the Roll_No of Amir : " ;
	cin>> amir.Roll_No ;
	cout<< "\nEnter the Marks of Amir : " ;
	cin>> amir.Marks ;
	cout<< "\nEnter the Average of Amir : " ;
	cin>> amir.Average ;
	cout<< "\nEnter the grade of Amir : " ;
	cin>> amir.grade ;
	cout<<"\n\nYou entered following data about student Amir ,\n" ;
	cout<<"Roll No : \t"<<amir.Roll_No ;
	cout<<"\nMarks : \t"<<amir.Marks ;
	cout<<"\nAverage : \t"<<amir.Average ;
	cout<<"\nGrade : \t"<<amir.grade ;
	return 0 ;
}
