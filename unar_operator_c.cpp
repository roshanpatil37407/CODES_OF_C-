#include<iostream>
using namespace std;
class count
{
	private:
		int value;
		public:
			count():value(5){ }
			void operator++()
			{
				++value;
			}
			void display(){
				cout<<"\ncount :"<<value;
			}
};
int main()
{
	count count1;
	++count1;
	count1.display();
}
