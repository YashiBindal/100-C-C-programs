#include<iostream>
using namespace std;
void pyramid1(int r1)
{
	for(int i=1;i<=r1;i++)
	{
		for(int j=1;j<=r1-i;j++)
		cout<<"  ";
		for(int k=1;k<=i;k++)
		cout<<i<<"   ";
		cout<<endl;
	}
}
void pyramid2(int r2)
{     int x=1;
	for(int i=1;i<=r2;i++)
	{
		for(int j=1;j<=r2-i;j++)
		cout<<"  ";
		for(int k=1;k<=i;k++)
		cout<<x++<<"   ";
		cout<<endl;
	}
}
void pyramid3(int r3)
{
	for(int i=1;i<=r3;i++)
	{
		for(int j=1;j<=r3-i;j++)
		cout<<"  ";
		for(int k=1;k<=i;k++)
		cout<<"*"<<"   ";
		cout<<endl;
	}
}
int main()
{
	int r1,r2,r3;
	cin>>r1>>r2>>r3;
	pyramid1(r1);
	pyramid2(r2);
	pyramid3(r3);
	return 0;
}
