#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int large=arr[0],small=arr[0];

    	for(int j=0;j<n;j++)
    	{
    		if(large<arr[j])
    		{
    			large=arr[j];
			}
			if(small>arr[j])
			small=arr[j];
		}
	cout<<"largest element is: "<<large;
	cout<<"\n Smallest element is : "<<small;
}
