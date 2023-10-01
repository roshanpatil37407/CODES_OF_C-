#include<iostream>
using namespace std;
inline int max(int x,int y)
{
	return(x>y)?x:y;
}
int main()
{
	cout<<"\nmax(200,800):"<<max(200,800);
	cout<<"\nmax(900,800):"<<max(900,800);
	cout<<"\nmax(600,800):"<<max(600,800);
	cout<<"\nmax(200,900):"<<max(200,900);
}
