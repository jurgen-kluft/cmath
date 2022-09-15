#ifndef __CMATH_CAM_H__
#define __CMATH_CAM_H__
#ifdef __cplusplus
extern "C" {
#endif

#include "cmath/cglm.h"


void
glmc_frustum(float left,   float right,
             float bottom, float top,
             float nearZ,  float farZ,
             mat4  dest);


void
glmc_ortho(float left,   float right,
           float bottom, float top,
           float nearZ,  float farZ,
           mat4  dest);


void
glmc_ortho_aabb(vec3 box[2], mat4 dest);


void
glmc_ortho_aabb_p(vec3 box[2], float padding, mat4 dest);


void
glmc_ortho_aabb_pz(vec3 box[2], float padding, mat4 dest);


void
glmc_ortho_default(float aspect, mat4 dest);


void
glmc_ortho_default_s(float aspect, float size, mat4 dest);


void
glmc_perspective(float fovy, float aspect, float nearZ, float farZ, mat4 dest);


void
glmc_persp_move_far(mat4 proj, float deltaFar);


void
glmc_perspective_default(float aspect, mat4 dest);


void
glmc_perspective_resize(float aspect, mat4 proj);


void
glmc_lookat(vec3 eye, vec3 center, vec3 up, mat4 dest);


void
glmc_look(vec3 eye, vec3 dir, vec3 up, mat4 dest);


void
glmc_look_anyup(vec3 eye, vec3 dir, mat4 dest);


void
glmc_persp_decomp(mat4 proj,
                  float * __restrict nearZ,
                  float * __restrict farZ,
                  float * __restrict top,
                  float * __restrict bottom,
                  float * __restrict left,
                  float * __restrict right);


void
glmc_persp_decompv(mat4 proj, float dest[6]);


void
glmc_persp_decomp_x(mat4 proj,
                    float * __restrict left,
                    float * __restrict right);


void
glmc_persp_decomp_y(mat4 proj,
                    float * __restrict top,
                    float * __restrict bottom);


void
glmc_persp_decomp_z(mat4 proj,
                    float * __restrict nearZ,
                    float * __restrict farZ);


void
glmc_persp_decomp_far(mat4 proj, float * __restrict farZ);


void
glmc_persp_decomp_near(mat4 proj, float * __restrict nearZ);


float
glmc_persp_fovy(mat4 proj);


float
glmc_persp_aspect(mat4 proj);


void
glmc_persp_sizes(mat4 proj, float fovy, vec4 dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_cam_h */
