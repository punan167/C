#include<stdio.h>
#include<conio.h>
void area(void);

int glo=9;  //global variables

int main()		//function scope
{	
	glo = glo * 6;  //can use glov from main functoion
	area();
	_getch();
	return 0;
}

void area()		//function scope
{
	int a = 10;
	int b = 4;
	int c = a*b;
	glo = glo + 4;		//can use glov from main functoion
	if (c > 2)			//if block scope
	{
		int k=4;
		glo = glo - 2;	//can use glov from main functoion
	}
	printf("c is %d",c);	
	_getch();
}
