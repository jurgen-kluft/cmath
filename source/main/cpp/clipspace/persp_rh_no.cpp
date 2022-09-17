#include "cmath/clipspace/persp_rh_no.h"
#include "cmath/call/clipspace/persp_rh_no.h"

void glmc_frustum_rh_no(float left, float right, float bottom, float top, float nearZ, float farZ, mat4 dest) { glm_frustum_rh_no(left, right, bottom, top, nearZ, farZ, dest); }
void glmc_perspective_rh_no(float fovy, float aspect, float nearVal, float farVal, mat4 dest) { glm_perspective_rh_no(fovy, aspect, nearVal, farVal, dest); }
void glmc_persp_move_far_rh_no(mat4 proj, float deltaFar) { glm_persp_move_far_rh_no(proj, deltaFar); }
void glmc_persp_decomp_rh_no(mat4 proj, float* __restrict nearZ, float* __restrict farZ, float* __restrict top, float* __restrict bottom, float* __restrict left, float* __restrict right)
{
    glm_persp_decomp_rh_no(proj, nearZ, farZ, top, bottom, left, right);
}

void glmc_persp_decompv_rh_no(mat4 proj, float dest[6]) { glm_persp_decompv_rh_no(proj, dest); }
void glmc_persp_decomp_x_rh_no(mat4 proj, float* __restrict left, float* __restrict right) { glm_persp_decomp_x_rh_no(proj, left, right); }
void glmc_persp_decomp_y_rh_no(mat4 proj, float* __restrict top, float* __restrict bottom) { glm_persp_decomp_y_rh_no(proj, top, bottom); }
void glmc_persp_decomp_z_rh_no(mat4 proj, float* __restrict nearZ, float* __restrict farZ) { glm_persp_decomp_z_rh_no(proj, nearZ, farZ); }
void glmc_persp_decomp_far_rh_no(mat4 proj, float* __restrict farZ) { glm_persp_decomp_far_rh_no(proj, farZ); }
void glmc_persp_decomp_near_rh_no(mat4 proj, float* __restrict nearZ) { glm_persp_decomp_near_rh_no(proj, nearZ); }
void glmc_persp_sizes_rh_no(mat4 proj, float fovy, vec4 dest) { glm_persp_sizes_rh_no(proj, fovy, dest); }
float glmc_persp_fovy_rh_no(mat4 proj) { return glm_persp_fovy_rh_no(proj); }
float glmc_persp_aspect_rh_no(mat4 proj) { return glm_persp_aspect_rh_no(proj); }
