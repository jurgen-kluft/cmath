#ifndef __CMATH_MAT2_H__
#define __CMATH_MAT2_H__
#ifdef __cplusplus
extern "C" {
#endif

#include "cmath/cglm.h"


void
glmc_mat2_copy(mat2 mat, mat2 dest);


void
glmc_mat2_identity(mat2 mat);


void
glmc_mat2_identity_array(mat2 * __restrict mat, size_t count);


void
glmc_mat2_zero(mat2 mat);


void
glmc_mat2_mul(mat2 m1, mat2 m2, mat2 dest);


void
glmc_mat2_transpose_to(mat2 m, mat2 dest);


void
glmc_mat2_transpose(mat2 m);


void
glmc_mat2_mulv(mat2 m, vec2 v, vec2 dest);


float
glmc_mat2_trace(mat2 m);


void
glmc_mat2_scale(mat2 m, float s);


float
glmc_mat2_det(mat2 mat);


void
glmc_mat2_inv(mat2 mat, mat2 dest);


void
glmc_mat2_swap_col(mat2 mat, int col1, int col2);


void
glmc_mat2_swap_row(mat2 mat, int row1, int row2);


float
glmc_mat2_rmc(vec2 r, mat2 m, vec2 c);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_mat2_h */
