#include<iostream>
using namespace std;
class std1
{
		protected:
		int no;
		public:
			void get1()
			{
				cout<<"\n enter roll number :";
			cin>>no;
			}
			void disp1()
			{
				cout<<"\n the roll number is="<<no;
			}
};
class text:public std1
{
		protected:
		int t1,t2;
		public:
			void get2(int x, int y)
			
{
	t1=x;
	t2=y;
}
void disp2()
{
	cout<<"\n the marks of text1 :"<<t1;
		cout<<"\n the marks text2 :"<<t2;
	
}
};
class sport
{
	protected:
		int score;
		public:
			void get3(int z)
			{
				score=z;
			}
			void disp3()
			{
				cout<<"\n the scrore mark="<<score;
				
			}
};
class result:public text,public sport
{
	int total;
	public:
		void disp4()
		{
			total=t1+t2+score;
			disp1();
			disp2();
			disp3();
			
		}
};
int main()
{
	result r;
	r.get1();
	r.get2(50,60);
	r.get3(50);
	r.disp4();
}
