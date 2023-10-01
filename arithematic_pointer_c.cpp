#include<iostream>
using namespace std;
int main()
{
	int a[3]={100,300,900};
	int *ptr;
	ptr=a;
	for(int i=0;i<3;i++)
	{
		cout<<"\n Value of ptr="<<ptr;
		cout<<"\n Value of *ptr="<<*ptr;
		ptr++;
	}
}
