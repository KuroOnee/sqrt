#include "def.h"
#include <math.h>

int sqrtsolve(double a, double b, double c)
{
	if ((a == 0) && (b == 0) && (c == 0))
		return -1;
	d = (b * b) - (4 * a * c);
	if (d > 0)
		{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		return 2;
		}
	if (d == 0)
		{
		x1 = -b / (2 * a);
		return 1;
		}
	return 0;
}