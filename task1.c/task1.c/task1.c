#include <stdio.h>

void f(const double *x, double *result) {
	*result = ((4 - *x * *x) / 2);
}
void main(void) {
	double x = 3, result;
	f(&x, &result);
	printf("%.4f\n", result);
	scanf("%Lf", &x);
	f(&x, &result);
	printf("%.4f\n", result);
	system("pause");
	return 0;
}