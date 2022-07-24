#include<iostream>
using namespace std ;
int main ()
{
	int first[3][3] = {{10,20,30} , {40,50,60} , {70,80,90} } ;
	int second[3][3]  = {{1,2,3} , {4,5,6} , {7,8,9} } ;
	int third[3][3] ;
	int r,c ;
	
	for ( r = 0 ; r < 3 ; r++ )
	{
		for ( c = 0 ; c < 3 ; c++ )
		{
			third[r][c] = first[r][c] + second[r][c] ;
		}
	}
	
	for ( r = 0 ; r < 3 ; r++ )
	{
		for ( c = 0 ; c < 3 ; c++ )
		{
			cout<<third[r][c]<<"\t" ;
		}
		cout<<"\n";
	}
	 
	
}
