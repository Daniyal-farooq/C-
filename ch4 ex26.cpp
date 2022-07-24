#include<iostream>
using namespace std;
int main()
{
	float english , urdu , maths , astronomy , biology , obtainable , total_obtained , percentage ;
	cout<<"Please enter the obtainable marks in each subject : " ;
	cin>>obtainable ;
	cout<<"please enter obtained marks in English : " ;
	cin>>english ;
	cout<<"please enter obtained marks in Urdu : " ;
	cin>>urdu ;
	cout<<"please enter obtained marks in Mathematics : " ;
	cin>>maths ;
	cout<<"please enter obtained marks in Astronomy : " ;
	cin>>astronomy ;
	cout<<"please enter obtained marks in Biology : " ;
	cin>>biology ;
	total_obtained = english + urdu + maths + astronomy + biology ;
	percentage = total_obtained / 5.0 ;
	cout<<"The percentage of obtained marks in the guven subjects is : "<< percentage ;
	return 0 ;
}
