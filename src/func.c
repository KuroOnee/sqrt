#include "def.h"
#include <math.h>

int sqrtsolve(float a, float b, float c, float* f, float* e)
{
	float d, x1, x2;
	if ((a == 0) && (b == 0) && (c == 0))
		return -1;
	d = (b * b) - (4 * a * c);
	if (d > 0)
		{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		*f = x1;
		*e = x2;
		return Tworoots;
		}
	if (d == 0)
		{
		x1 = -b / (2 * a);
		f = &x1;
		return Oneroot;
		}
	return Noroots;
}