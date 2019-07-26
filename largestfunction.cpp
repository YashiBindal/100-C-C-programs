#include<bits/stdc++.h>
using namespace std;
int largest(int arr[],int l)
{
	int large=arr[0];
	for(int i=0;i<l;i++)
	if(large<arr[i])
	large=arr[i];
	return large;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"Largest element is: "<<largest(arr,n);
}
