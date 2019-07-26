#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter length of series: ";
	cin>>n;
	float sum=0;
	for(float i=1;i<=n;i++)
	{
		sum=sum+(1/i);
		cout<<"1/"<<i<<" + ";
	}
	cout<<"\b\b = "<<sum;
}
