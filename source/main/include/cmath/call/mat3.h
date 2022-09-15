#ifndef __CMATH_MAT3_H__
#define __CMATH_MAT3_H__
#ifdef __cplusplus
extern "C"
{
#endif

#include "cmath/cglm.h"

/* DEPRECATED! use _copy, _ucopy versions */
#define glmc_mat3_dup(mat, dest) glmc_mat3_copy(mat, dest)

    void  glmc_mat3_copy(mat3 mat, mat3 dest);
    void  glmc_mat3_identity(mat3 mat);
    void  glmc_mat3_zero(mat3 mat);
    void  glmc_mat3_identity_array(mat3* __restrict mat, size_t count);
    void  glmc_mat3_mul(mat3 m1, mat3 m2, mat3 dest);
    void  glmc_mat3_transpose_to(mat3 m, mat3 dest);
    void  glmc_mat3_transpose(mat3 m);
    void  glmc_mat3_mulv(mat3 m, vec3 v, vec3 dest);
    float glmc_mat3_trace(mat3 m);
    void  glmc_mat3_quat(mat3 m, versor dest);
    void  glmc_mat3_scale(mat3 m, float s);
    float glmc_mat3_det(mat3 mat);
    void  glmc_mat3_inv(mat3 mat, mat3 dest);
    void  glmc_mat3_swap_col(mat3 mat, int col1, int col2);
    void  glmc_mat3_swap_row(mat3 mat, int row1, int row2);
    float glmc_mat3_rmc(vec3 r, mat3 m, vec3 c);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_mat3_h */
