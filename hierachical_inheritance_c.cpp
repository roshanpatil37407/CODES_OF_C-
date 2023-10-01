#include<iostream>
using namespace std;
class A
{
		protected:
		int x,y;
		public:
			void get1(int a, int b);
			void disp1();
};
void A::get1(int a, int b)
{
	x=a;
	y=b;
}
void A::disp1()
{
	cout<<"\n the value of x :"<<x;
		cout<<"\n the value of y :"<<y;
	
}
class B:public A
{
	public:
	 void add()
	 {
	 	disp1();
	 	cout<<"\n addition of x & y :"<<x+y;
	 }
	
};
class C:public A
{
	public:
	 void mul()
	 {
	 	disp1();
	 	cout<<"\n multiplication of x & y :"<<x*y;
	 }
};
int main()
{
	B ob1;
	C ob2;
	ob1.get1(3,5);
	ob1.add();
	ob2.get1(5,6);
	ob2.mul();
}
