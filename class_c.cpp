#include<iostream>
using namespace std;
class num
{
	int x,y;
	public:
	void getxy()
	{
		cout<<"\n enter the value of X and Y :";
		cin>>x>>y;
	}
	void dispxy()
	{
		cout<<"\nX="<<x<<"\nY="<<y;
		
	}
};
int main(){
	num N;
	
	N.getxy();
	N.dispxy();
	
}
