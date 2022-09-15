#ifndef __CMATH_EULER_H__
#define __CMATH_EULER_H__
#ifdef __cplusplus
extern "C" {
#endif

#include "cmath/cglm.h"


void
glmc_euler_angles(mat4 m, vec3 dest);


void
glmc_euler(vec3 angles, mat4 dest);


void
glmc_euler_xyz(vec3 angles,  mat4 dest);


void
glmc_euler_zyx(vec3 angles,  mat4 dest);


void
glmc_euler_zxy(vec3 angles, mat4 dest);


void
glmc_euler_xzy(vec3 angles, mat4 dest);


void
glmc_euler_yzx(vec3 angles, mat4 dest);


void
glmc_euler_yxz(vec3 angles, mat4 dest);


void
glmc_euler_by_order(vec3 angles, glm_euler_seq axis, mat4 dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_euler_h */
