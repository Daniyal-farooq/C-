#include<iostream>
using namespace std ;
int max(int first[3][3] , int second[3][3] , int max);
int main()
{
	int first[3][3] = {{10,20,30} ,
					   {40,50,60} ,
					   {70,80,90} } ;
	int second[3][3] = {{1,2,3} , 
					    {4,5,6} ,
					    {7,8,9} } ;
	int third[3][3] = {0};
	int r,c ,m,max = 0;
	max(first , second , max);
	return 0;
}
int max ( int first[3][3] , int second[3][3] , int max )
{
	int first[3][3] = {{10,20,30} ,
					   {40,50,60} ,
					   {70,80,90} } ;
	int second[3][3] = {{1,2,3} , 
					    {4,5,6} ,
					    {7,8,9} } ;
	int third[3][3] = {0};
	int r,c ,m,max = 0;
	cout<<"\nThe first matrix is given below : \n" ;
	for ( r = 0 ; r < 3 ; r ++)
	{
		for (c = 0 ; c<3 ; c++ )
		{
			cout<<first[r][c] << "\t" ;
		}
		cout<<endl ;
	}
	cout<<"\nThe second matrix is given below : \n" ;
	for ( r = 0 ; r < 3 ; r ++)
	{
		for (c = 0 ; c<3 ; c++ )
		{
			cout<<second[r][c] << "\t" ;
		}
		cout<<endl ;
	}
	
	
	
	
	for ( r = 0 ; r < 3 ; r++ )
	{
		for ( c = 0 ; c < 3 ; c++ )
		{
			if ( max < first[r][c])
			max = first[r][c];
		}
		cout<<"\n";
	
	}
	for ( r = 0 ; r < 3 ; r++ )
	{
		for ( c = 0 ; c < 3 ; c++ )
		{
			if ( max < second[r][c])
			max = second[r][c];
		}
		cout<<"\n";
	
	}
	cout<<"\nThe Max number of 2 arrays is given below : "<<max ;
	
}
