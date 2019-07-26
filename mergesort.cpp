#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int beg,int mid,int end)
{
	int i=beg, j=mid+1,k=0;
	int temp[end-beg+1];
	while (i <= mid && j <= end)
	{
		if (arr[i] < arr[j])
		{
			temp[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
 	while (i <= mid)
	{
		temp[k] = arr[i];
		k++;
		i++;
	}
    while (j <=end)
	{
		temp[k] = arr[j];
		k++;
		j++;
	}
		for (k=beg;k<=end;k++)
	{
		arr[k] = temp[k-beg];
	}
}

void merge_sort(int arr[],int beg,int end)
{
	if(beg<end)
	{
	    int	mid=(beg+end)/2;
		merge_sort(arr,beg,mid);
		merge_sort(arr,mid+1,end);
		merge(arr,beg,mid,end);
	}
}
int main()
{
	int n;
    cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}
