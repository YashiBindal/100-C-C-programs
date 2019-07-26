#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
  int num;
  cin>>num;
  int sum=0,temp =num;
  while(num)
  {
  	int dig=num%10;
  	sum=sum+fact(dig);
  	num=num/10;
	  }	
	  if(temp==sum)
	  cout<<"Strong Num";
	  else
	  cout<<"not strong num";
}
