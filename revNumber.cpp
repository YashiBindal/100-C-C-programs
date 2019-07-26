#include<bits/stdc++.h>
#define f(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define pb push_back
using namespace std;
int main()
{
	int num;
	cout<<"enter a number:";
	cin>>num;
	int d,rem,count=0;
	d=num;
	while(d!=0)
	{
		d=d/10;
		count++;
	}
	cout<<"reverse of number is:";
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		cout<<rem;
	}
}
