#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	 ofstream outf("ITEM");
	cout<<"\n enter item name :";
	char name[20];
	cin>>name;
	outf<<name<<"\n";
	cout<<"\n enter item cost";
	float cost;
	cin>>cost;
	outf<<cost<<"\n";
	out.close();
	ifstream inf("ITEM");
	inf>>name;
	inf>>cost;
	cout<<"\n";
	cout<<"\nITEM name :"<<name;
	cout<<"\nITEM cost :"<<cost;
	inf.close();
}
