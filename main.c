#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "calnum.h"		/* tu naglowek funkcji calkujacej */

double 
f(double x)
{
	return 5 * x;
}
int
main(int argc, char **argv)
{
	double		a = argc > 1 ? atof(argv[1]) : 0;	/* pocz. przedzialu
								 * calkowania */
	double		b = argc > 2 ? atof(argv[2]) : M_PI;	/* koniec przedzialu
								 * calkowania */
	int		n = argc > 3 ? atoi(argv[3]) : 10000;	/* liczba krokow
								 * calkowania */

	printf("Int <%g,%g>[%i] (5*x)= %g\n", a, b, n, calnum(f, a, b, n));

	return 0;
}
