#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row,col;
	cin>>row>>col;
	int arr[row][col];
	cout<<"enter elements of matrix: "<<endl;
	for(int i=0;i<row;i++)
	for(int j=0;j<col;j++)
	cin>>arr[i][j];
	
	for(int i=0;i<row;i++)
	for(int j=0;j<col;j++)
	{
		if(i!=j && i<j)
		{
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
	for(int i=0;i<row;i++)
	{
	for(int j=0;j<col;j++)
	cout<<arr[i][j]<<" ";
	cout<<endl;
}
}