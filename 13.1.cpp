#include<iostream>
using namespace std;
class boy
{
	private:
	int x;
	public:
	int in()
	{
		cout<<"Enter a number : ";
		cin>>x;
	}
	int out()
	{
		cout<<"\nYou entered : "<<x;
	}
};
int main()
{
	boy obj;
	obj.in();
	obj.out();
	return 0;
}

