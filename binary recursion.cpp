#include<bits/stdc++.h>
using namespace std;
int binary_search(int ar[],int key,int l,int r)
{
	    int pos=0;
		int mid=(l+r)/2;
		if(ar[mid]==key)
		{pos=mid;
		return pos+1;
	    }
		else if(key>ar[mid])
		return binary_search(ar,key,mid+1,r);
		else
		return 
		binary_search(ar,key,l,mid-1);
	
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
    int l=0,r=n-1; 
    int pos= binary_search(arr,key,l,r);
	if(pos)
	cout<<"element found at position "<<pos;
	else 
	cout<<"element not found";
	
}
