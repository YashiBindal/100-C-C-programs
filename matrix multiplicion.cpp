#include<bits/stdc++.h>
using namespace std;
int main()
{
	int row1,col1;
    cin>>row1>>col1;
    int row2,col2;
    cin>>row2>>col2;
    if(row2!=col1)
    cout<<"Matrix cannot be mutiplied"<<endl;
    else{
	int arr1[row1][col1];
	cout<<"enter elements of mat1: "<<endl;
	for(int i=0;i<row1;i++)
	for(int j=0;j<col1;j++)
	cin>>arr1[i][j];
	cout<<"Enter elemets of mat2: "<<endl;
	int arr2[row2][col2];
	for(int i=0;i<row2;i++)
	for(int j=0;j<col2;j++)
	cin>>arr2[i][j];
	
	int arr3[row1][col2];
	for(int i=0;i<row1;i++ )
	{
		for(int j=0;j<col2;j++)
		{
		   arr3[i][j]=0;
		   for(int k=0;k<row2;k++)
		   {
		   	arr3[i][j]+=arr1[i][k]*arr2[k][j];
			   }	
		}
	}
	
	cout<<"resultant matrix is:"<<endl;
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col2;j++)
		cout<<arr3[i][j]<<" ";
		cout<<endl;
	}
}
}
