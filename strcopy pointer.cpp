#include<bits/stdc++.h>
using namespace std;
void strcopy(char *s1,char *s2)
{
	while(*s1)
	{
		*s2=*s1;
		s1++;
		s2++;
	}
	*s2='\0';
}
int main()
{
	int n;
	cin>>n;
	char s1[n],s2[n];
	for(int i=0;i<n;i++)
	cin>>s1[i];
	strcopy(s1,s2);
	cout<<s2;
	
}
