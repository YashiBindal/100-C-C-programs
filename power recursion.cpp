#include<iostream>
using namespace std;
int pow(int num,int p)
{   int val;
    if(p==0)
    return 1;
    else
	return num*pow(num,p-1);
    	
}
int main()
{
	int num, power, val=0;
	cin>>num>>power;
	cout<<pow(num,power);
}
