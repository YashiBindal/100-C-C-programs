#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	if(n==1||n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int row;
	cin>>row;
	for(int i=0;i<row;i++)
	{
		for(int k=1;k<row-i;k++)
		cout<<"  ";
		for(int j=0;j<=i;j++)
		{
			int k=fact(i)/(fact(j)*fact(i-j));
			cout<<k<<"   ";
		}
		cout<<endl;
	}
}
