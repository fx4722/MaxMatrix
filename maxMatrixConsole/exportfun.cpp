#include "exportfun.h"
#include "stdafx.h"

double ex_maxmatrix(double *a, int row, int col)
{
	double y;
	emxArray_real_T *A = emxCreateWrapper_real_T(a, row, col);
	maxmatrix_initialize();
	y = maxmatrix(A);
	maxmatrix_terminate();
	return y;
}
