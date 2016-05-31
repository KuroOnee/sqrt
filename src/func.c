#include "def.h"
#include <math.h>

int sqrtsolve(double a, double b, double c, double* x1, double* x2, double* d)
{
	double dis;
	if ((a == 0) && (b == 0) && (c == 0))
		return -1;
	dis = (b * b) - (4 * a * c);
	*d = dis;
	if (dis > 0)
		{
		*x1 = (-b + sqrt(dis)) / (2 * a);
		*x2 = (-b - sqrt(dis)) / (2 * a);
		return 2;
		}
	if (dis == 0)
		{
		*x1 = -b / (2 * a);
		return 1;
		}
	return 0;
}