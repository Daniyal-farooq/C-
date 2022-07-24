#include<iostream>
using namespace std;
int main()
{
	int first[3][3] = {{10,20,30} ,
					   {40,50,60} ,
					   {70,80,90} } ;
	int second[3][3] = {{1,2,3} , 
					    {4,5,6} ,
					    {7,8,9} } ;
	int third[3][3] = {0};
	int r,c,m;
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
		for ( c = 0 ; c < 3 ; c++)
		{
			for( m = 0 ; m < 3 ; m++ )
			{
				third[r][c] = third[r][c] + first[r][m] * second[m][c] ; 
			}
		}
	}
	cout<<"\nThe multiplication is given below as : \n" ;
	for ( r = 0 ; r < 3 ; r++ )
	{
		for ( c = 0 ; c < 3 ; c++ )
		{
			cout<<third[r][c]<<"\t" ;
		}
		cout<<"\n";
	}
	
	for ( r = 0 ; r < 3 ; r++ )
	{
		for ( c = 0 ; c < 3 ; c++ )
		{
			third[r][c] = first[r][c] + second[r][c] ;
		}
	}
	cout<<"\nThe sum of 2 arrays is given below : \n" ;
	for ( r = 0 ; r < 3 ; r++ )
	{
		for ( c = 0 ; c < 3 ; c++ )
		{
			cout<<third[r][c]<<"\t" ;
		}
		cout<<"\n";
	}
	cout<<"\nThe subtraction of 3d arrays is given below : \n" ;
	for ( r = 0 ; r < 3 ; r++ )
	{
		for ( c = 0 ; c < 3 ; c++ )
		{
			third[r][c] = first[r][c] - second[r][c] ;
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
	cout<<"\nThe division ( array1 / array2 ) is given below as : \n";
	for ( r = 0 ; r < 3 ; r++ )
	{
		for ( c = 0 ; c < 3 ; c++ )
		{
			third[r][c] = first[r][c] / second[r][c] ;
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
