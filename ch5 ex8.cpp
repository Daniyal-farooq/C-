#include<iostream>
#include<iomanip>
using namespace std ;
int main()
{
	int choice ;
	float value , converted_value;
	cout<<setw(4)<<"Code"<<"\t\t"<<setw(22)<<"Type of Conversion\n\n";
	cout<<setw(4)<<1     <<"\t\t   "<<"Inchs to centimeters\n" ;
	cout<<setw(4)<<2     <<"\t\t   "<<"Centimeters to Inches\n" ;
	cout<<setw(4)<<3     <<"\t\t   "<<"Gallons to litres\n" ;
	cout<<setw(4)<<4     <<"\t\t   "<<"Litres to Gallons\n" ;
	cout<<setw(4)<<5     <<"\t\t   "<<"Miles to Kilometers\n" ;
	cout<<setw(4)<<6     <<"\t\t   "<<"Kilometers to Miles\n" ;
	cout<<setw(4)<<7     <<"\t\t   "<<"Pounds to Kilograms\n" ;
	cout<<setw(4)<<8     <<"\t\t   "<<"Kilograms to Pounds\n" ;
	cout<<"Enter the code of type the required conversion : " ;
	cin>>choice ;
	cout<<"Enter the value or amount for the conversion : " ;
	cin>> value ;
	if ( choice == 1 )
	{
		converted_value = value * 2.54 ;
		cout<<"Value in Centimeters : "<<converted_value ;
	}
	else if ( choice == 2 )
	{
		converted_value = value / 2.54 ;
		cout<<"Value in Inches"<<converted_value ;
	}
	else if ( choice == 3 )
	{
		converted_value = value * 3.785 ;
		cout<<"Value in Litres :"<<converted_value ;
	}
	else if ( choice == 4 )
	{
		converted_value = value / 3.785 ;
		cout<<"Value in Gallons : "<<converted_value ;
	}
	else if ( choice == 5 )
	{
		converted_value = value * 1.609 ;
		cout<<"Value in Kilometers : "<<converted_value ;
	}
	else if ( choice == 6 )
	{
		converted_value = value / 1.609 ;
		cout<<"Value in Miles : "<<converted_value ;
	}
	else if ( choice == 7 )
	{
		converted_value = value * 0.4536 ;
		cout<<"Value in Kilograms : "<<converted_value ;
	}
	else if ( choice == 8 )
	{
		converted_value = value / 0.4536 ;
		cout<<"Value in Pounds : "<<converted_value ;
	}
	else
	{
		cout<<"Invalid selection of conversiom." ;
	}
	return 0 ; 
}
