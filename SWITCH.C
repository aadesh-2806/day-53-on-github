#include<stdio.h>
#include<conio.h>
int main()
{
	int t;
	//clrscr();
	scanf("%d",&t);
	switch(t)
	{
		case 1:
			printf("Sun");
			break;
		case 7:
			printf("Sat");
		default:
			printf("Invalid");
		case 2:
			printf("Mon");
			break;
	}
	getch();
}
