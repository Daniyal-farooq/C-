#include<iostream>
#include<math.h>
#include<iomanip>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main()
{
		int first_number,second_number,third_number,fourth_number,fifth_number,max,min;
		
	cout << "Enter first number : ";
	cin >> first_number;
	cout << "Enter second number : ";
	cin >> second_number;
	cout << "Enter third number : ";
	cin >> third_number;
	cout << "Enter fourth number : ";
	cin >> fourth_number;
	cout << "Enter fifth number : ";
	cin >> fifth_number;
	if(first_number > second_number && first_number > third_number && first_number > fourth_number && first_number > fifth_number)
		max=first_number;
	if(second_number > first_number && second_number > third_number && second_number > fourth_number && second_number > fifth_number)
		max=second_number;
	if(third_number > first_number && third_number > second_number && third_number > fourth_number && third_number > fifth_number)
		max=third_number;
	if(fourth_number > first_number && fourth_number > second_number && fourth_number > third_number && fourth_number > fifth_number)
		max=fourth_number;			
	if(fifth_number > first_number && fifth_number > second_number && fifth_number > third_number && fifth_number > fourth_number)
		max=fifth_number;
	cout<<"\nGreatest number is : "<<max;
	if(first_number < second_number && first_number < third_number && first_number < fourth_number && first_number < fifth_number)
		min=first_number;
	if(second_number < first_number && second_number < third_number && second_number < fourth_number && second_number < fifth_number)
		min=second_number;
	if(third_number < first_number && third_number < second_number && third_number < fourth_number && third_number < fifth_number)
		min=third_number;
	if(fourth_number < first_number && fourth_number < second_number && fourth_number < third_number && fourth_number < fifth_number)
		min=fourth_number;			
	if(fifth_number < first_number && fifth_number < second_number && fifth_number < third_number && fifth_number < fourth_number)
		min=fifth_number;
	cout<<"\nSmallest number is : "<<min;
	}
