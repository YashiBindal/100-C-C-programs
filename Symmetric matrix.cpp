#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int mat[n][n];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		cin>>mat[i][j];
	}
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{
		cout<<mat[i][j]<<" ";
	}
	cout<<endl;
    }
    int tran[n][n];
    for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		tran[j][i]=mat[i][j];
	}
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{
		cout<<tran[i][j]<<" ";
	}
	cout<<endl;
    }
    for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		if(tran[i][j]!=mat[i][j])
		{
			cout<<"not symmetric";
			exit(0);
		}
	}
	cout<<"Matrix is symmetric";
}
