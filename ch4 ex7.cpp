
#include<iostream>
using namespace std ;
int main()
{
    float total_pages , pages_perday , number_ofdays , pages_read , pages_remaining ;
    cout<<"Please enter total number of pages of the book: " ;
    cin>>total_pages ;
    cout<<"Please enter number of pages you read every day : " ;
    cin>>pages_perday ;
    cout<<"Please enter number of days you read the book : " ;
    cin>>number_ofdays ;
    pages_read = number_ofdays * pages_perday ;
    pages_remaining = total_pages - pages_read ;
    cout<<"The number of pages that have been read is : "<<pages_read ;
    cout<<"\nThe number of pages remaining is : "<<pages_remaining ;
    return 0 ;
}
/*
#include<iostream>
using namespace std ;
int main()
{
    float total_pages , pages_perday , number_ofdays ;
    cout<<"Please enter total number of pages of the book: " ;
    cin>>total_pages ;
    cout<<"Please enter number of pages you read every day : " ;
    cin>>pages_perday ;
    cout<<"Please enter number of days you read the book : " ;
    cin>>number_ofdays ;
    cout<<"The number of pages that have been read is : "<<number_ofdays * pages_perday ;
    cout<<"\nThe number of pages remaining is : "<<total_pages - ( number_ofdays * pages_perday ) ;
    return 0 ;
}
*/

