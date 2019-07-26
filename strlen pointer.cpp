#include<bits/stdc++.h>
using namespace std;
int stringlen(char *s)
{
	int len=0;
	while(*s!='\0')
	{
		len++;
		s++;
	}
	return len;
}
int main()
{
	 
	 char str[100];
	 cout<<"enter string: ";
	 
	 cin>>str;
	 int len=stringlen(str);
	 cout<<"length of string is:"<<len;
}
