#include "calnum.h"

double		calnum  (double (*f) (double), double a, double b, int n){
	double		d;
	double		i;
	double		calka = 0;

	d = (b - a) / n;

	for (i = 0; i < n; i++) {
		calka += f(a + i * d + d / 2) * d;
	}


	return calka;
}
