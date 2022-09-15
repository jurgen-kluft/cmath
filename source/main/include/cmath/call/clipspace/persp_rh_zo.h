#ifndef __CMATH_PERSP_RH_ZO_H__
#define __CMATH_PERSP_RH_ZO_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "cmath/cglm.h"

    void glmc_frustum_rh_zo(float left, float right, float bottom, float top, float nearZ, float farZ, mat4 dest);
    void glmc_perspective_rh_zo(float fovy, float aspect, float nearVal, float farVal, mat4 dest);
    void glmc_persp_move_far_rh_zo(mat4 proj, float deltaFar);
    void glmc_persp_decomp_rh_zo(mat4 proj, float* __restrict nearZ, float* __restrict farZ, float* __restrict top, float* __restrict bottom, float* __restrict left, float* __restrict right);
    void glmc_persp_decompv_rh_zo(mat4 proj, float dest[6]);
    void glmc_persp_decomp_x_rh_zo(mat4 proj, float* __restrict left, float* __restrict right);
    void glmc_persp_decomp_y_rh_zo(mat4 proj, float* __restrict top, float* __restrict bottom);
    void glmc_persp_decomp_z_rh_zo(mat4 proj, float* __restrict nearZ, float* __restrict farZ);
    void glmc_persp_decomp_far_rh_zo(mat4 proj, float* __restrict farZ);
    void glmc_persp_decomp_near_rh_zo(mat4 proj, float* __restrict nearZ);
    void glmc_persp_sizes_rh_zo(mat4 proj, float fovy, vec4 dest);
    float glmc_persp_fovy_rh_zo(mat4 proj);
    float glmc_persp_aspect_rh_zo(mat4 proj);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_persp_rh_zo_h */
