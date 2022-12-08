#include<stdio.h>
#include<conio.h>
void if_test();
void switch_test();
int main()
{

	if_test();
	switch_test();
	_getch();
	return 0;
}

void if_test()
{
	bool student = false;
	if(student)
	{
	printf("Student can buy with discount");
	}else
	{
	printf("you not a student");
	}

}

void switch_test()
{

	char mychar = 'A';
	switch(mychar)
	{
	case 'A' : printf("I am A");
	
	}


}