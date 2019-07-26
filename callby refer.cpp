#include<iostream>
using namespace std;
void change(int num1,int num2)
{
	int temp=num1;
	num1=num2;
	num2=temp;
	cout<<"num1: "<<num1<<"\nnum2 :"<<num2;
	}
int main()
{
	int num1,num2;
	cin>>num1>>num2;
	change(num1,num2);
	cout<<"\nnum1 in main:"<<num1<<"\n num2 in main"<<num2;
	return 0;
}
