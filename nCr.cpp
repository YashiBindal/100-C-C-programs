#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	if(n==0||n==1)
	return 1 ;
	else
	return n*fact(n-1);
}
int combi(int n,int r)
{
	int res;
	res=fact(n)/(fact(r)*fact(n-r));
	return res;
}
int main()
{
	int n,r;
	cin>>n>>r;
	cout<<"combination ways are:"<<combi(n,r);
}
