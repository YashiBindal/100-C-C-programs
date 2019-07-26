#include<bits/stdc++.h>
#define f(i,a,n) for(int i=a;i<n;i++)
#define vi vector<int>
#define pb push_back
using namespace std;
int main()
{
	string str;
	int len=0;
	cout<<"enter string1:";
	cin>>str;
	f(i,0,str[i]!='\0')
	len++;
	int f=0;
		f(i,0,len-1)
		{
			if(str[i]==str[len-1-i])
			f=0;
			else
			f=1;
		}
		if(f==0)
		cout<<"pallindrom";
		else cout<<"not pallindrom";
	}
	

