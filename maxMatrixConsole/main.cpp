// maxMatrixConsole.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "exportfun.h"

int main()
{
	double *a = new double[9]{ 1,2,3,4,5,6,7,8,9 };
	double y = 0;
	y = ex_maxmatrix(a, 3, 3);
	printf("%f", y);
	return 0;
}

