#include<iostream>
using namespace std;
void change(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
	cout<<" a and b are :"<<a<<" "<<b<<"\n";
}
int main()
{
	int a,b;
	cin>>a>>b;
	change(a,b);
	cout<<a<<" "<<b;
}
