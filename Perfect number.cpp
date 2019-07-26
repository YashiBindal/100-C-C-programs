#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int temp=num,sum=0;
	for(int i=1;i<=num/2;i++)
	{
		if(num%i==0)
		sum=sum+i;
	}
	if(temp==sum)
	cout<<"perfect num";
	else
	cout<<"not a perfect number";
}
