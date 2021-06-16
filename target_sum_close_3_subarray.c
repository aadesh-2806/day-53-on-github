#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],s,t,n,r;
	printf("hello\nenter value=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter target=");
	scanf("%d",&t);
	for(s=0;s<n-2;s++)
	{
		r=a[s]+a[s+1]+a[s+2];
		if(r==t+1 || r==t-1)
		{
			printf("sum closest=%d (%d+%d+%d=%d)\n",r,a[s],a[s+1],a[s+2],r);
		}
	}
	getch();
}
