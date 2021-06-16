#include<stdio.h>
#include<math.h>

void main()
{	
	int i,s,t,n,r,j,a[50];
	printf("hello\nenter value=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter target=");
	scanf("%d",&t);
	
	for(s=0;s<n;s++)
	{
		for(j=s+1;j<n;j++)
		{
			r=a[s]+a[j];
			if(r==t)
			{
				printf("[%d,%d]",s,j);
			}
		}
	}
	getch();
}
