//
// File: maxmatrix.cpp
//
// MATLAB Coder version            : 4.0
// C/C++ source code generated on  : 10-Jul-2018 10:09:24
//

// Include Files
#include "rt_nonfinite.h"
#include "maxmatrix.h"

// Function Definitions

//
// Arguments    : const emxArray_real_T *A
// Return Type  : double
//
double maxmatrix(const emxArray_real_T *A)
{
  double y;
  int idx;
  int k;
  boolean_T exitg1;
  if (A->size[0] * A->size[1] <= 2) {
    if (A->size[0] * A->size[1] == 1) {
      y = A->data[0];
    } else if ((A->data[0] < A->data[1]) || (rtIsNaN(A->data[0]) && (!rtIsNaN
                 (A->data[1])))) {
      y = A->data[1];
    } else {
      y = A->data[0];
    }
  } else {
    if (!rtIsNaN(A->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      k = 2;
      exitg1 = false;
      while ((!exitg1) && (k <= A->size[0] * A->size[1])) {
        if (!rtIsNaN(A->data[k - 1])) {
          idx = k;
          exitg1 = true;
        } else {
          k++;
        }
      }
    }

    if (idx == 0) {
      y = A->data[0];
    } else {
      y = A->data[idx - 1];
      while (idx + 1 <= A->size[0] * A->size[1]) {
        if (y < A->data[idx]) {
          y = A->data[idx];
        }

        idx++;
      }
    }
  }

  return y;
}

//
// File trailer for maxmatrix.cpp
//
// [EOF]
//
