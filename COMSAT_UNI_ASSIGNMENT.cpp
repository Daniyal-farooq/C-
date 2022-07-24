//         COMSAT UNI ASSIGNMENT
/*write a program that asks user to input integer array that contains marks of some
students for different subjects and prints following
1 Total score of each student
2 Marks of highest scoring subject for each student
3 Total marks of a student with highest score*/
#include<iostream>
using namespace std;
struct marks
{
	int markseng;
	int marksps;
	int marksis;
};
marks arr[3];
int main()
{
	int marks_of_highest_scoring_subject_of_each_student = 0;
	int marks_of_student_with_highest_marks = 0;
	for ( int o = 0 ; o < 3 ; o++)
	{
		cout<<"\n\nEnter eng marks of student"<<o+1<<" : ";
		cin>>arr[o].markseng;
		cout<<"\nEnter ps marks of student"<<o+1<<" : ";
		cin>>arr[o].marksps;
		cout<<"\nEnter is marks of student"<<o+1<<" : ";
		cin>>arr[o].marksis;
		
	}
	cout<<"**************************************************************";
	//finding total marks of a student with highest score
	for ( int o = 0 ; o < 3 ; o++)
	{
		cout<<"\nTotal marks of student "<<o+1<<" are : "<<arr[o].markseng + arr[o].marksis + arr[o].marksps ;
		
	}
	if ( (arr[0].markseng + arr[0].marksis + arr[0].marksps ) > (arr[1].markseng + arr[1].marksis + arr[1].marksps) && (arr[0].markseng + arr[0].marksis + arr[0].marksps) > (arr[2].markseng + arr[2].marksis + arr[2].marksps ) );
	{
		marks_of_student_with_highest_marks = (arr[0].markseng + arr[0].marksis + arr[0].marksps );
		
	}
	if  ( (arr[1].markseng + arr[1].marksis + arr[1].marksps ) > (arr[0].markseng + arr[0].marksis + arr[0].marksps) && (arr[1].markseng + arr[1].marksis + arr[1].marksps) > (arr[2].markseng + arr[2].marksis + arr[2].marksps ) );
	{
		marks_of_student_with_highest_marks = (arr[1].markseng + arr[1].marksis + arr[1].marksps );
		
	}
	if ( (arr[2].markseng + arr[2].marksis + arr[2].marksps ) > (arr[0].markseng + arr[0].marksis + arr[0].marksps) && (arr[2].markseng + arr[2].marksis + arr[2].marksps) > (arr[1].markseng + arr[1].marksis + arr[1].marksps ) );
	{
		marks_of_student_with_highest_marks = (arr[2].markseng + arr[2].marksis + arr[2].marksps );
		
	}
	//printing total marks of a student with highest score;
	cout<<"\n**************************************************************";
	cout<<"\nThe total marks of student with highest score is : "<<marks_of_student_with_highest_marks ;
	cout<<"\n**************************************************************";
	//finding marks of highest scoring subject for each subject
	for ( int o = 0 ; o < 3 ; o ++ )
	{
		if ( arr[o].markseng >= arr[o].marksis && arr[o].markseng >= arr[o].marksps )
		{
			marks_of_highest_scoring_subject_of_each_student = arr[o].markseng;
		}
		else if ( arr[o].marksis >= arr[o].markseng && arr[o].marksis >= arr[o].marksps )
		{
			marks_of_highest_scoring_subject_of_each_student = arr[o].marksis;
		}
		else if ( arr[o].marksps >= arr[o].marksis && arr[o].marksps >= arr[o].markseng )
		{
			marks_of_highest_scoring_subject_of_each_student = arr[o].marksps;
		}
		//printing marks_of_highest_scoring_subject_of_each_student
		cout<<"\nThe marks of highest scoring subject of student"<<o+1<<" are : "<<marks_of_highest_scoring_subject_of_each_student;
	}
	cout<<"\n\nProgram finished!.Thanks for using." ;
	return 0 ;
}
