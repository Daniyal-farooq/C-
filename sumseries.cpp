#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{	float sum=1.,divi= 2.;
	while ( divi <= 100. )
	{
		sum = sum + (  1.  /  divi  );
		divi += 2;
	}
	
	cout<<"\nSum is : "<<sum;
}
