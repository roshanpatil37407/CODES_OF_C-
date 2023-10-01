#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
	 samples()
		{
			a=0;
			b=0;
		}
		void disp()
		{
			cout<<"\nthe value of a="<<a;
			cout<<"\nthe value of b="<<b;
		}
};
int main()
{
	sample s;
	s.samples();
	s.disp();
}
