#include<iostream>
using namespace std;
int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
	
}
int main ()
{
	int n;
	cout<<"\n enter the number :";
	cin>>n;
	cout<<"\nFactorial of"<<n<<"="<<fact(n);
}
