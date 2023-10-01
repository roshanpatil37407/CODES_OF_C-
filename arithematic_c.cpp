#include<iostream>
using namespace std;
class num
{
	int x,y;
	public:
		void inpute()
		{
			cout<<"\n enter first number :";
			cin>>x;
		}
		void inpute2()
		{
			cout<<"\n enter second number :";
			cin>>y;
		}
		num operator+(num &ob)
		{
			num A;
			A.x=x+ob.x;
			return(A);
		}
		void print()
		{
			cout<<"\n sum of two numbers is :"<<x;
		}
		
};
int main()
{
	num x1,y1,res;
	x1.inpute();
	y1.inpute();
	res=x1+y1;
	res.print();
}
