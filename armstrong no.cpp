#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,sum=0;
	cin>>num;
	int temp=num;
	while(num)
	{
		int dig= num%10;
		sum=sum+dig*dig*dig;
		num=num/10;
	}
	if(temp==sum)
	cout<<"armstrong number";
	else
	cout<<"not an armstrong number";
}
