#include<iostream>
using namespace std;
struct student
{
	int rollno ;
	int marks[5] ;
	
};
int main()
{
	float avg = 0 ;student Asuka ;
	cout <<"Enter Rollno of Asuka : ";
	cin >>Asuka.rollno ;
	for ( int o = 0 ; o < 5 ; o++ )
	{
		cout<<"\nEnter marks of subject"<<o+1 <<" : ";
		cin>>Asuka.marks[o] ;
		avg = avg + Asuka.marks[o] ;
	}
	avg = avg / 5 ;
	//displaying out all data
	cout<<"Asuka's entered data is given below , " ;
	cout<<"\nRollno : "<<Asuka.rollno ;
	for ( int o = 0 ; o < 5 ; o++ )
	{
		cout<<"\nMarks of subject"<<o+1 <<" are : "<<Asuka.marks[o] ;
	}
	return 0 ;
}
