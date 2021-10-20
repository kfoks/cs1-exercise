#include<stdio.h>

int Liczba = 10;
void IncNumber();
void DecNumber();
void ValNumber();

int main()
{
	ValNumber();
	for (int i = 0; i < 3; i++)
	{
		IncNumber();
	}
	ValNumber();
	for (int j = 0; j < 2; j++)
	{
		DecNumber();
	}
	IncNumber();
	ValNumber();


	return 0;

}

void ValNumber()
{
	printf("%d\n",Liczba);

}
void DecNumber()
{
	Liczba -= 3;

}
void IncNumber()
{
	Liczba += 5;

}
