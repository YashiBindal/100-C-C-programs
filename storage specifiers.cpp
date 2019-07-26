#include<bits/stdc++.h>
using namespace std;
extern int x=1;
void autorun()
{
	auto j=1;
	{
		auto j=3;
		cout<<j;
	}
	cout<<j;
}
void externrun()
{
	//extern int x;
	cout<<x;
	x=3;
	cout<<x;
}
void registerrun()
{
	register int k;
	k=8;
	cout<<k;
}
void staticrun()
{
	static int i=4;
	cout<<i;
}
int main()
{
	autorun();
//	externrun();
	registerrun();
	staticrun();
	return 0;
}
