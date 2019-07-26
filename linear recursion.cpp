#include<iostream>
using namespace std;
int search(int arr[],int key,int size)
{
	if(key==arr[size])
	return size;
	else if(size==-1)
	return -1;
	else
	{
		return search(arr,key,size-1);
	}
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
	int pos=n;
	while(pos>0)
	{
	 pos=search(arr,key,pos-1);
	cout<<"value found at pos: "<<pos+1<<endl;
    }
	return 0;
}
