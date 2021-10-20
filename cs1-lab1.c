#include <stdio.h>
#include <math.h>

void ReadData();
void SolveQuadEq();
void PrintSolution();

double a, b, c, delta, x1, x2;

int main()
{
	ReadData();
	SolveQuadEq();
	PrintSolution();

	return  0;
}

void ReadData()
{
	printf("Please insert the quadratic coeeficient, the linear coefficient and the free term, in that order.\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
}

void SolveQuadEq()
{
	delta = (b * b) - (4 * a * c);

	if (delta > 0)
	{
		x1 = ((-b) + sqrt(delta)) / (2 * a);
		x2 = ((-b) - sqrt(delta)) / (2 * a);
	}
	if (delta == 0)
	{
		x1 = (-b) / (2 * a);
	}
}

void PrintSolution()
{
	if (delta > 0)
	{
		printf("Equation has two solutions: %lf %lf \n", x1, x2);
	}
	if (delta == 0)
	{
		printf("Equation has one solution: %lf \n", x1);
	}
	if(delta < 0)
	{
		printf("Equation has no solutions \n");
	}
}
