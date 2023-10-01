#include<iostream>
using namespace std;
class dist
{
	int x1,x2,x3;
	public:
		dist(int x,int y)
		{
			x1=x;
			x2=y;
			x3=0;
			cout<<"\n parameteries constructor invole";
			cout<<"\nx1"<<x1<<"andx2"<<x2;
		}
		void sum();
		void display();
		~dist()
		{
			cout<<"destructor invoked";
		}
};
void dist::sum()
{
	sum=x1+x2;
	
}
void dist::display()
{
	cout<"\n the total dist="<<sum;
}
int main()
{
	dist a(100,200);
	a.sum();
	a.display();
	
}
