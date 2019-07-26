#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	if(num<0)
	cout<<"entr positive number";
	else{
	int dig,sum=0;
	while(num)
	{
	  dig=num%10;
	  sum=sum+dig;
	  num=num/10;	
	}
	cout<<"Sum of digits is:"<<sum;
}}
