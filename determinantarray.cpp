#include<iostream>
using namespace std ;
int main()
{
	int first[3][3] , r , c , adj[3][3] ;
	float inverse[3][3]    ,   det;
	for ( r = 0 ; r <3 ; r ++)
	{
		for ( c = 0 ; c < 3 ; c++)
		{
			cout<<"\nEnter value of index ["<<r<<"] ["<<c<<"] : " ;
			cin>>first [r][c] ;
		}
	}
	cout<<"\nThe values in form of matrix are given below : \n" ;
	for ( r = 0 ; r <3 ; r ++)
	{
		for ( c = 0 ; c < 3 ; c++)
		{
			cout<<first[r][c]<<"\t" ;
			
		}
		cout<<"\n" ;
	}
	det =  first[0][0]*( first[1][1] * first[2][2] - first[1][2] * first[2][1]  )  +  ( - first[0][1] )  *( first[1][0] * first[2][2] - first[1][2] * first[2][0] ) + first[0][2]*( first[1][0] * first[2][1] - first[1][1] * first[2][0]  ) ; 
    cout<<"\nTHe determinant is : "<<det ;
	if ( det == 0 )
	{
		cout<<"\nDeterminant is 0 ! " ;
	}
	else if ( det != 0 )
	{
		adj[0][0] =   ( first[1][1] * first[2][2] - first[1][2] * first[2][1]   ) ;
		adj[0][1] = - ( first[1][0] * first[2][2] - first[1][2] * first[2][0]   ) ;
		adj[0][2] =   ( first[1][0] * first[2][1] - first[1][1] * first[2][0]   ) ;
		adj[1][0] = - ( first[0][1] * first[2][2] - first[0][2] * first[2][1]   ) ;
		adj[1][1] =   ( first[0][0] * first[2][2] - first[0][2] * first[2][0]   ) ;
		adj[1][2] = - ( first[0][0] * first[2][1] - first[0][1] * first[2][0]   ) ;
		adj[2][0] =   ( first[0][1] * first[1][2] - first[0][2] * first[1][1]   ) ;
		adj[2][1] = - ( first[0][0] * first[1][2] - first[0][2] * first[1][0]   ) ;
		adj[0][0] =   ( first[0][0] * first[1][1] - first[0][1] * first[1][0]   ) ;
		cout<<"\nThe adjacent is given below : \n" ;
		for ( r = 0 ; r <3 ; r ++)
	{
		for ( c = 0 ; c < 3 ; c++)
		{
			cout<<adj[r][c]<<"\t" ;
			
		}
		cout<<"\n" ;
	}
		// TRANSPOSE
		/*adj[0][1] = adj[1][0] ;
		adj[0][2] = adj[2][0] ;
		adj[1][0] = adj[0][1] ;
		adj[1][2] = adj[2][1] ;
		adj[2][0] = adj[0][2] ; 
		adj[2][1] = adj[1][2] ;
		// inverse */ 
		for ( r = 0 ; r < 3 ; r ++ )
		{
			for ( c = 0 ; c < 3 ; c ++)
			{
				inverse[r][c] =  inverse[r][c] / det ;
			}
		}
		cout<<"\nThe inverse is given below : \n" ;
		for ( r = 0 ; r < 3 ; r ++ )
		{
			for ( c = 0 ; c < 3 ; c ++)
			{
				cout<<inverse[r][c]<<"\t" ;
			}
			cout<<endl ;
		}
		
	}
	return 0 ;
}
