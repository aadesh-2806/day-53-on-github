#include<stdio.h>

void swap(int,int);
void main()
{
	int a,b; // p is a pointer (pointer to variable)
	printf("Enter 2 values:");
	scanf("%d%d",&a,&b);
	//swap
	swap(a,b);
	//printf("After swapping: %d\t%d\n",a,b);
	getch();
}

void swap(int x,int y)
{
	int t;
		t=x;
		x=y;
		y=t;
	printf("After swapping: %d\t%d\n",x,y);	
			
}	
