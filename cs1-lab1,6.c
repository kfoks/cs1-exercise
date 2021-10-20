#include <stdio.h>
#include <math.h>
#define PI (4.*atan(1))
#define PIa (4.*atan(1)) // without brackets
#define PIb (4*atan(1)) // without dot at 4 

int main()
{
	printf(" % lf\n ", 3 / PI);
	printf(" % lf\n", 3 / PIa);
	printf(" % lf\n", 3 / PIb);



}
