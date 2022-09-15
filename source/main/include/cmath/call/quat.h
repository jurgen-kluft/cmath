#ifndef __CMATH_QUAT_H__
#define __CMATH_QUAT_H__
#ifdef __cplusplus
extern "C" {
#endif

#include "cmath/cglm.h"


void
glmc_quat_identity(versor q);


void
glmc_quat_identity_array(versor * __restrict q, size_t count);


void
glmc_quat_init(versor q, float x, float y, float z, float w);


void
glmc_quat(versor q, float angle, float x, float y, float z);


void
glmc_quatv(versor q, float angle, vec3 axis);


void
glmc_quat_copy(versor q, versor dest);


void
glmc_quat_from_vecs(vec3 a, vec3 b, versor dest);


float
glmc_quat_norm(versor q);


void
glmc_quat_normalize_to(versor q, versor dest);


void
glmc_quat_normalize(versor q);


float
glmc_quat_dot(versor p, versor q);


void
glmc_quat_conjugate(versor q, versor dest);


void
glmc_quat_inv(versor q, versor dest);


void
glmc_quat_add(versor p, versor q, versor dest);


void
glmc_quat_sub(versor p, versor q, versor dest);


float
glmc_quat_real(versor q);


void
glmc_quat_imag(versor q, vec3 dest);


void
glmc_quat_imagn(versor q, vec3 dest);


float
glmc_quat_imaglen(versor q);


float
glmc_quat_angle(versor q);


void
glmc_quat_axis(versor q, vec3 dest);


void
glmc_quat_mul(versor p, versor q, versor dest);


void
glmc_quat_mat4(versor q, mat4 dest);


void
glmc_quat_mat4t(versor q, mat4 dest);


void
glmc_quat_mat3(versor q, mat3 dest);


void
glmc_quat_mat3t(versor q, mat3 dest);


void
glmc_quat_lerp(versor from, versor to, float t, versor dest);


void
glmc_quat_lerpc(versor from, versor to, float t, versor dest);


void
glmc_quat_nlerp(versor q, versor r, float t, versor dest);


void
glmc_quat_slerp(versor q, versor r, float t, versor dest);


void
glmc_quat_look(vec3 eye, versor ori, mat4 dest);


void
glmc_quat_for(vec3 dir, vec3 up, versor dest);


void
glmc_quat_forp(vec3 from, vec3 to, vec3 up, versor dest);


void
glmc_quat_rotatev(versor from, vec3 to, vec3 dest);


void
glmc_quat_rotate(mat4 m, versor q, mat4 dest);


void
glmc_quat_rotate_at(mat4 model, versor q, vec3 pivot);


void
glmc_quat_rotate_atm(mat4 m, versor q, vec3 pivot);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_quat_h */
