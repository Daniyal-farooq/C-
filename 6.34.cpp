#include<iostream>
using namespace std ;
int main()
{
	int n , counter = 0;
	
	for ( n =1 ; n <= 40 ; n+=3 )
	{
		counter +=1 ;
		if (counter%2== 0 )
		cout<<-n<<" ";
		else
		cout<<n<<" ";
	}
}
