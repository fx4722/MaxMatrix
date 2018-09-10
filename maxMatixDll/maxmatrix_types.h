//
// File: maxmatrix_types.h
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 10-Jul-2018 10:09:24
//
#ifndef MAXMATRIX_TYPES_H
#define MAXMATRIX_TYPES_H

// Include Files
#include "rtwtypes.h"

// Type Definitions
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  double *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_real_T
#endif

//
// File trailer for maxmatrix_types.h
//
// [EOF]
//
