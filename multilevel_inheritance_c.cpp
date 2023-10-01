#include<iostream>
using namespace std;
class student
{
	protected:
		int no;
		public:
			void get1();
			void disp();
			
};
void student::get1()
{
	cout<<"\n Enter the roll no :";
	cin>>no;
}
void student::disp()
{
	cout<<"\n Roll number is"<<no;
	
}
class text:public student
{
	protected:
		int m1,m2;
		public:
			void getm()
			{
				cout<<"\n Enter the Marks m1 :";
				cin>>m1;
					cout<<"\n Enter the Marks m2 :";
				cin>>m2;
			}
			void dispm()
			{
				cout<<"\n marks of sub1 :"<<m1;
					cout<<"\n marks of sub2 :"<<m2;
			}
};
class result:public text
{
	float total;
	public:
		void display()
		{
			total=m1+m2;
			disp();
			dispm();
			cout<<"\nTotal marks :"<<total;
			
			
		}
};
int main()
{
	result r;
	r.get1();
	r.getm();
	r.display();
}
