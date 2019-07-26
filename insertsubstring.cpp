#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,subs;
	cin>>s>>subs;
	int pos;
	cin>>pos;
//  to add substring at given position;	
	string s1,s2;
	s1=s.substr(0,pos);
	s2=s.substr(pos,s.length());
	cout<<s1+subs+s2;
//  to delete n character from given position	
	string s3;
	int n;
	cin>>n;
	s3=s.erase(pos-1,n);
	cout<<s3;
// to replace a char at given position	
	string s4;
	s4=s.replace(pos-1,1,subs);
	cout<<s4;
	
}
