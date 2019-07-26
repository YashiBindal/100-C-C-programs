#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row,col;
    cin>>row>>col;
	int arr[row][col];
	for(int i=0;i<row;i++)
	for(int j=0;j<col;j++)
	cin>>arr[i][j];
	int large=arr[0][0], small=arr[0][0];
	 
	for(int i=0;i<row;i++)
	for(int j=0;j<col;j++)
	{
		if(large<arr[i][j])
		large=arr[i][j];
		if(small>arr[i][j])
		small=arr[i][j];
	}
	cout<<"largest elemet of matrix is: "<<large<<endl;
	cout<<"smallest element of matrix is: "<<small<<endl;
	
}
