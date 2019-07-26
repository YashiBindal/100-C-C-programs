#include<bits/stdc++.h>
using namespace std;
void bubble(int ar[],int len)
{
	int flag=0;
	for(int i=0;i<len;i++)
	{
	for(int j=0;j=len-i-1;j++)
	{
		if(ar[j]>ar[j+1])
		 {
			flag=1;
			int temp=ar[j];
        	ar[j]=ar[j+1];
           	ar[j+1]=temp;
		}
	}
	if(flag==0)
	cout<<"array is already sorted";
	}
	for(int i=0;i<len;i++)
	cout<<ar[i];
}
int main()
{
  	int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	bubble(arr,n);	
}
