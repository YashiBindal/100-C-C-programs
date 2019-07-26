#include<bits/stdc++.h>
using namespace std;
int comp(string s1,string s2)
{
	int f=0;
	int l1=s1.length();
	int l2=s2.length();
	if(l1!=l2)
	return 1;
	else{
	for(int i=0;s1[i]!='\0';i++)
	if(s1[i]!=s2[i])
	f=1;
	return f;}
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int res=comp(s1,s2);
	if(res)
	cout<<"not equal";
	else
	cout<<"equal";
}
