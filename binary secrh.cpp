#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_search(int ar[],int key,int len)
{
	int l=0,r=len-1;
	int pos=0;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(ar[mid]==key)
		{pos=mid;
		return pos+1;
	    }
		else if(key>ar[mid])
		l=mid+1;
		else
		r=mid-1;
	}
	return pos;
}
int main()
{
  	int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int key;
	cin>>key;
//	sort(arr,arr+n);
	int pos= binary_search(arr,key,n);
	if(pos)
	cout<<"element found at position "<<pos;
	else 
	cout<<"element not found";
	
} 
