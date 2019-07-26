#include<iostream>
using namespace std;
int fibo(int l)
{
	if(l<=1)
	return l;
	else
	return fibo(l-1)+fibo(l-2);
}
int main()
{
	int len;
	cin>>len;
	for(int i = 0;i<len;i++) 
	cout<<fibo(i);
}
