#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int ar[n];
	int i,k;
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
	int min=ar[0],max=ar[0];

	for(k=0;k<n;k++)
	{
		if(min>ar[k])
			min=ar[k];
		if( max<ar[k])
		   max=ar[k];	
	}
	printf("min is %d\n",min);
	printf("max is %d",max);
	getch();
}
