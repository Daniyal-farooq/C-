#include<iostream>r
using namespace std;
int main()
{ 	int firstv = 1000;
	int secondv = 50, thirdv ;
 	firstv += secondv ;
		cout<<"Answer after using += operator : "<<firstv;
		cout<<endl;	
	firstv -= secondv ;
		cout<<endl<<"Answer after using -= operator : "<<firstv;
		cout<<endl;	
	firstv /= secondv ;
		cout<<endl<<"Answer after using /= operator : "<<firstv;
		cout<<endl;
	firstv *= secondv ;
		cout<<endl<<"Answer after using *= : "<<firstv;
		cout<<endl;
	firstv %= secondv ;
		cout<<"\nAnswer after using %= : "<<firstv;
		cout<<endl;
	firstv += secondv++;
		cout<<"\n"<<"Answer after using %= and ++ : "<<firstv;
		cout<<endl;
	firstv += secondv--;
		cout<<"\n"<<"Answer after using %= and -- : "<<firstv;
		cout<<endl;
	 
		cout<<"\n"<<"Values before swapping will be \nfirstvariable : "<<firstv ;
		cout<<"\n"<<"secondvariable : "<<secondv ;
		cout<<"\n"<<"thirdvariable : "<<thirdv;
		cout<<endl; 
	thirdv = firstv ;
	
	firstv = secondv ;
	
	secondv = firstv ;
		cout<<"\n"<<"Values after swapping will be \nfirstvariable : "<<firstv ;
		cout<<"\n"<<"secondvariable : "<<  secondv;
		cout<<"\n"<<"thirdvariable : "<<  thirdv;
	return 0;  
  
}
