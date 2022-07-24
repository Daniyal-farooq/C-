#include<iostream>
using namespace std ;
int main()
{
	int age , months , days ;
	cout<<"Enter the age : " ;
	cin>> age ;
	days = age * 365.2425 ;
	months = days / 30.4368 ;
	cout<<"Your age in months is : " <<months ;
	cout<<"\nYour age in days is : " <<days ;
	return 0 ;
}
/*
  The Gregorian calendar is interntional calender, 
  like the Julian calendar, 
  is a solar calendar with 12 months of 28–31 days each. 
  The year in both calendars consists of 365 days,
  with a leap day being added to February in the leap years.
  The average length of a month of the Gregorian calendar is 
  exactly 30.436875 days (365.2425 days/year ÷ 12 months/year). 
  In every 400-year period, 
  there are 303 regular years and 97 leap years.
*/
