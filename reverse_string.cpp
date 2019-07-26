#include<bits/stdc++.h>
#define f(i,a,n) for (int i=a;i<n;i++)
#define vi vector<int>
#define pb push_back
using namespace std;
int main()
{
    string s;
    int len=0;
	cout<<"Enter string:";
	cin>>s;
	int i=0;
	while(s[i]!='\0')
	 {
	 	len++;
	 	i++;
	 }	
	cout<<len;
	cout<<"reverse string is : ";
	f(i,0,len)
	  cout<<s[len-1-i];
	return 0;		
}

