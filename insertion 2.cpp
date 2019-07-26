#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		j=i+1;
		while(arr[j]<arr[i] && i>=0)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i--;
			j--;
		}
	}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<"\t";
}
int main()
{
  	int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	insertion(arr,n);
}
