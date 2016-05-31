#include <ctest.h>
#include <def.h>

CTEST(func_pack, err)
{
	double x1, x2, d;
	const double a = 0, b = 0, c = 0;
	const double ret = sqrtsolve(a, b, c, &x1, &x2, &d);
	const double expected_ret = -1;

	ASSERT_EQUAL(expected_ret, ret);
}

CTEST(func_pack, neg_d)
{
	double x1, x2, d;
	const double a = 3, b = 1, c = 5;
	sqrtsolve(a ,b, c, &x1, &x2, &d);
	const double expected_d = -59;

	ASSERT_DBL_NEAR(expected_d, d);
}

CTEST(func_pack, t_roots)
{
	double x1, x2, d;
	const double a = 1, b = -1, c = -2;
	sqrtsolve(a, b, c, &x1, &x2, &d);
	const double expected_d = 9;
	const double expected_x1 = 2;
	const double expected_x2 = -1;

	ASSERT_DBL_NEAR(expected_d, d);
	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
}
CTEST(func_pack, o_root)
{
	double x1, x2, d;
	const double a = 1, b = 2, c = 1;
	sqrtsolve(a, b, c, &x1, &x2, &d);
	const double expected_d = 0;
	const double expected_x1 = -1;

	ASSERT_DBL_NEAR(expected_d, d);
	ASSERT_DBL_NEAR(expected_x1, x1);
}