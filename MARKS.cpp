#include<bits/stdc++.h>
using namespace std;
int main()
{
	int marks;
	cin>>marks;
	if(marks>=60)
	cout<<"FIRST";
	else if(marks>=50 && marks<60)
	cout<<"SECOND";
	else if(marks>=40 && marks<50)
	cout<<"THIRD";
	else
	cout<<"FAILED";
}
