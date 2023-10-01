#include<iostream>
using namespace std;
class text
{
	int a,b;
	public:
	 samples()
		{
			a=0;
			b=0;
		}
		texts(int x,int y)
		{
			a=x;
			b=y;
		}
		void disp()
		{
			cout<<"\nthe value of a="<<a;
			cout<<"\nthe value of b="<<b;
		}
};
int main()
{
	text s;
	s.texts(10,20);
	s.samples();
	s.disp();
}
