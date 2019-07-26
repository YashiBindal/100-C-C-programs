#include<iostream>
using namespace std;
int main()
{
	int fact=1,num;
	cout<<"enter number:";
	cin>>num;
	while(num>0)
	{
		fact=num*fact;
		num--;
	}
	cout<<fact;
}
