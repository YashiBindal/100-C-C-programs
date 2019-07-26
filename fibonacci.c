#include<stdio.h>
int main()
{
	int a=0,b=1,t,len,i;
	printf("enter length of series:");
	scanf("%d",&len);
	if(len==1)
	printf("%d",a);
    else
	{
	printf("%d%d",a,b);
	for(i=0;i<len-2;i++)
	{
		t=a+b;
		printf("%d",t);
		a=b;
		b=t;
	}}
}
