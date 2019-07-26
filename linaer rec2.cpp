#include<iostream>
using namespace std;
int search(int arr[],int key,int pos,int size)
{
	if(key==arr[pos])
	return size;
	else if(pos==size)
	return -1;
	else
	{
		return search(arr,key,pos+1,size);
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
	int pos=0;
	 pos=search(arr,key,pos,n-1);
	 if(pos==-1)
	 cout<<"Value not found"<<endl;
	 else
	 cout<<"value found at pos: "<<pos+1<<endl;
    
	return 0;
}
