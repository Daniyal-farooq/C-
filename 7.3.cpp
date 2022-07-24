#include<iostream>
using namespace std;
int main()
{
    int exp [2][4] , r,c ,exo [2][4] , t , y ; 
    for ( r = 0 ; r < 2 ; r ++  )
    {
    	
    	for ( c = 0 ; c < 4 ; c++ )
    	{
    		cout<<"\nEnter value of exp [ "<<r <<"] "<<"[ "<<c<<" ] : "  ;
    		cin>> exp [ r ] [  c ] ;
		}
	}
	for ( t = 0 ; t < 2 ; t ++  )
    {
    	
    	for ( y = 0 ; y < 4 ; y++ )
    	{
    		cout<<"\nEnter value of exp [ "<<t <<"] "<<"[ "<<y<<" ] : "  ;
    		cin>> exp [ t ] [  y ] ;
		}
	}
	for ( r = 0 ; r < 2 ; r ++ )
	{
		for ( c = 0 ; c < 4 ; c++ )
		{
			cout<<exp[ r ][ c ]<<"\t" ;
		}
		cout<<"\n";
	}
	for ( t = 0 ; t < 2 ; t ++ )
	{
		for ( y = 0 ; y < 4 ; y++ )
		{
			cout<<exp[ t ][ y ]<<"\t" ;
		}
		cout<<"\n";
	}
}
