#ifndef __CMATH_RAY_H__
#define __CMATH_RAY_H__
#ifdef __cplusplus
extern "C"
{
#endif
#include "cmath/cglm.h"

    bool glmc_ray_triangle(vec3 origin, vec3 direction, vec3 v0, vec3 v1, vec3 v2, float* d);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_ray_h */
