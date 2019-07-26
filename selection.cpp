#include<bits/stdc++.h>
using namespace std;
void selection(int ar[],int n)
{
     for(int i=0;i<n-1;i++)
	 {
	 	for(int pos=i+1;pos<n;pos++)
	 	{
	 		if(ar[pos]<ar[i])
	 		{
	 			int temp=ar[i];
	 			ar[i]=ar[pos];
	 			ar[pos]=temp;
			 }
		 }
		 }	
		 for(int i=0;i<n;i++)
		 cout<<ar[i]<<" ";
}
int main()
{
  	int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	selection(arr,n);
}
