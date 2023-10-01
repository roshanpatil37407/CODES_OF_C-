#include<iostream>
using namespace std;
int main()
{
	int val[3]={55,88,99};
	int *ptr;
	ptr=val;
	cout<<"\n Element of array :";
	cout<<ptr[0]<<""<<ptr[1]<<""<<ptr[2];
}
