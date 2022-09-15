#ifndef __CMATH_SPHERE_H__
#define __CMATH_SPHERE_H__
#ifdef __cplusplus
extern "C" {
#endif

#include "cmath/cglm.h"


float
glmc_sphere_radii(vec4 s);


void
glmc_sphere_transform(vec4 s, mat4 m, vec4 dest);


void
glmc_sphere_merge(vec4 s1, vec4 s2, vec4 dest);


bool
glmc_sphere_sphere(vec4 s1, vec4 s2);


bool
glmc_sphere_point(vec4 s, vec3 point);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_sphere_h */
