#include<iostream>
using namespace std;
class sample
{
	int no;
	public:
	 sample(int x)
		{
			no=x;
		}
		sample(sample &);
		void disp();
	
};
sample::sample(sample &i)
{
	no=i.no;
}
void sample::disp()
{
	cout<<"\n the number="<<no;
}
int main()
{
	sample A(100);

	sample B(A);
	sample C=A;
	A.disp();
	B.disp();
	C.disp();
}
