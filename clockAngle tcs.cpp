#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int p;
	cin>>p;
	float lg,time,min;
	cin>>lg;
	time=((float)p/360)*lg;
	cout<<time<<endl;
	int x=time;
	float rem= time-x;
	cout<<rem;
/*	float rem =fmod(time,1);
	cout<<rem;
	/*min=time*60;
    float rem =min/60;
    cout<<rem;
	float angle =1/2*rem;
	cout<<angle;*/
}
