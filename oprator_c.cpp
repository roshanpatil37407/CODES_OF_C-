#include<iostream>
using namespace std;
class text
{
	private:
		int a;
		public:
			text(){
				cout<<"\n object to created :";
				
			}
				~text(){
				cout<<"\n object to deleted :";
				
			}
};
int main()
{
	text *p1=new text;
		text *p2=new text;
		delete p1;
		delete p2;
		
}
