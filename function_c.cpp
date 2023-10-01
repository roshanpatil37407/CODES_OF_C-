#include<iostream>
using namespace std;
int fun(int*x,int*y)
{
	int z=*x;
	*x=*y;
	*y=z;
}
int main()
{
	int a=44 , b=55;
	cout<<"\nBefore swap";
	cout<<"a"<<a<<"b="<<b<<"\n";
	fun(&a,&b);
	
	cout<"\n After swap with pass by pointer";
	cout<<"a"<<a<<"b="<<b<<"\n";
}
