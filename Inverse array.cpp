#include<iostream>
#include<iomanip>
using namespace std ;
int main()
{
	int first[3][3] , adj[3][3] , trans[3][3] , row , column , exchanger;
	float inverse[3][3]    ,   det;
	// ARRAY INITIALIZATION.
	for ( row = 0 ; row <3 ; row ++)
	{
		for ( column = 0 ; column < 3 ; column ++)
		{
			cout<<"\nEnter value of index ["<<row<<"] ["<<column<<"] : " ;
			cin>>first [row][column] ;
		}
	}
	// MATRIX FORM OUTPUT.
	cout<<"\nThe values in form of matrix are given below : \n" ;
	for ( row = 0 ; row <3 ; row ++)
	{
		for ( column = 0 ; column < 3 ; column ++)
		{
			cout<<first[row][column]<<"\t" ;
			
		}
		cout<<"\n" ;
	}
	// FINDING DETERMINANT.
	det =  first[0][0]*( first[1][1] * first[2][2] - first[1][2] * first[2][1]  )  +  ( - first[0][1] )  *( first[1][0] * first[2][2] - first[1][2] * first[2][0] ) + first[0][2]*( first[1][0] * first[2][1] - first[1][1] * first[2][0]  ) ; 
    cout<<"\nTHe Determinant is : "<<det ;
	if ( det == 0 )
	{
		cout<<"\nDeterminant is 0. Solution not possible! " ;
	}
	else if ( det != 0 )
	{  
	// FINDING ADJACENT.	
		adj[0][0] =   ( first[1][1] * first[2][2] - first[1][2] * first[2][1]   ) ;
		adj[0][1] = - ( first[1][0] * first[2][2] - first[1][2] * first[2][0]   ) ;
		adj[0][2] =   ( first[1][0] * first[2][1] - first[1][1] * first[2][0]   ) ;
		adj[1][0] = - ( first[0][1] * first[2][2] - first[0][2] * first[2][1]   ) ;
		adj[1][1] =   ( first[0][0] * first[2][2] - first[0][2] * first[2][0]   ) ;
		adj[1][2] = - ( first[0][0] * first[2][1] - first[0][1] * first[2][0]   ) ;
		adj[2][0] =   ( first[0][1] * first[1][2] - first[0][2] * first[1][1]   ) ;
		adj[2][1] = - ( first[0][0] * first[1][2] - first[0][2] * first[1][0]   ) ;
		adj[2][2] =   ( first[0][0] * first[1][1] - first[0][1] * first[1][0]   ) ;
		cout<<"\n\nThe Adjacent is given below : \n" ;
		for ( row = 0 ; row <3 ; row ++)
	{
		for ( column = 0 ; column < 3 ; column ++)
		{
			cout<<adj[row][column]<<"\t" ;
			
		}
		cout<<"\n" ;
	}
		// FINDING TRANSPOSE.
		cout<<"\nThe Transpose is given below : \n" ;
		
		for ( row = 0 ; row <3 ; row ++)
	{
		for ( column = 0 ; column < 3 ; column ++)
		{
			trans[row][column] = adj[column][row];
			
		}
		
	} 
		for ( row = 0 ; row <3 ; row ++)
	{
		for ( column = 0 ; column < 3 ; column ++)
		{
			cout<<trans[row][column]<<"\t" ;
			
		}
		cout<<"\n" ;
	}
		// FINDING INVERSE.  
		for ( row = 0 ; row < 3 ; row ++ )
		{
			for ( column = 0 ; column < 3 ; column ++)
			{
				inverse[row][column] =  trans[row][column] / det ;
			}
		}
		cout<<"\nThe Inverse is given below : \n" ;
		for ( row = 0 ; row < 3 ; row ++ )
		{
			for ( column = 0 ; column < 3 ; column ++)
			{
				cout<<fixed<<setprecision(4)<<inverse[row][column]<<"\t" ;
			}
			cout<<endl ;
		}
		
	}
	return 0 ;
}
