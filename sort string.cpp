#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int l=s.length();
	//selection sort
	for(int i=0;i<l-1;i++)
	for(int j=i+1;j<l;j++)
	if(s[j]<s[i])
	{
		char temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	cout<<s;
}
