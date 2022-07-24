#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int mangoes , oranges ,bananas ;
	cout<<"Enter number of mangoes (Rs 20 per mango) : " ;
	cin>>mangoes ;
	cout<<"Enter number of oranges (Rs 10 per orange): " ;
	cin>>oranges ;
	cout<<"Enter number of bananas (Rs 5 per banana): " ;
	cin>>bananas ;
	
	cout<<"--------------------------------------------------------------";
	cout<<endl<<setw(14)<<"Customer no."<<setw(12)<<"Mangoes"<<setw(12)<<"oranges"<<setw(12)<<"Bananas"<<setw(13)<<"Total bill";
	cout<<endl<<"--------------------------------------------------------------";
	cout<<endl<<setw(14)<<1<<setw(12)<<mangoes<<setw(12)<<oranges<<setw(12)<<bananas<<setw(13)<<  (20 * mangoes) + (10 * oranges) + (5 * bananas) ;
	cout<<"\n\n\n\n";
	
}
