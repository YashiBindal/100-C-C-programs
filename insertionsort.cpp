#include<bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(arr[j]>temp && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
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
