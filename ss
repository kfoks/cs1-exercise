#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#define PI (4.0*atan(1))

int main()
{
	FILE* f1;
	f1 = fopen("data.txt", "w");
	srand((unsigned)time(NULL));
	double xmin, xmax, ymin, ymax,radius, x ,y,xcentr,ycentr,r;
	int Nr, Nc;
	int n;
	xmin = 1;
	xmax = 3;
	ymin = 1;
	ymax = 2;
	xcentr = 2;
	ycentr = 1.5;
    Nr=0;
    Nc=0;
    
    printf("Give the number of the points \n");
	scanf("%d", &n);
    

	printf("Give radius of the circle \n");
	scanf("%lf", &radius);
    

	
	do
	{
		double angle = ((double)rand()) / (double)RAND_MAX * 2 * PI;
		double m = radius * sqrt((double)rand() / (double)RAND_MAX);

		x = xcentr +m * cos(angle);
		y = ycentr + m * sin(angle);

		if ((x <= xmax) && (x >= xmin) && (y >= ymin) && (y <= ymax))
		{
			Nr++;
			Nc++;
			fprintf(f1, "%lf \t %lf \n", x, y);
		}
		else
		{
			Nc++;
		}

	} while (Nr < n);
		
		r=Nc/Nr;
	printf("Ratio of r is: %lf", r);

	return 0;
}
