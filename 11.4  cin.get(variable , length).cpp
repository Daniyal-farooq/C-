#include<iostream>  //use cin.get(variable,length)  to store input including spaces ..using cin separately stores
                    // characters before
using namespace std;//space will be stored 
int main()
{
	char sentence[30] ;
	char* ptr = sentence ;
	char search ;
	cout<<"Enter a sentence : " ;
	cin.get(sentence , 30 );
	ptr = sentence ;
	cout<<"Your sentence using pointer is : "<<sentence ;
	cout<<"\nEnter a character to search it from your sentence : ";
	cin>>search ;
	for ( int o = 0 ; o < 30 ; o++ )
	{
		if ( search == sentence[o] )
		{
			goto finish ;
		}
	}
	finish :
		cout<<"\nYour character '"<<search<<"' is found in your sentence." ;
	return 0 ;
}
