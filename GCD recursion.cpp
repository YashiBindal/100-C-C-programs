#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
	return b;
	if(b==0);
	return a;
	if(a==b);
	return a;
	if(a>b)
	return gcd(a-b,b);
	return gcd(a,b-a);
}
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	cout<<"GCD is:"<<gcd(n1,n2);
	return 0;
}
