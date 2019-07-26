#include<iostream>
using namespace std;
int main()
{
	int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int key;
	cin>>key;
	for(int i=0;i<n;i++)
	if(arr[i]==key)
	{
	cout<<"value found at "<<i+1<<" position";
	break;}
	else if(i==n-1)
	cout<<"value not found ";
}
