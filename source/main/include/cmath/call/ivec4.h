#ifndef __CMATH_IVEC4_H__
#define __CMATH_IVEC4_H__
#ifdef __cplusplus
extern "C" {
#endif

#include "cmath/cglm.h"


void
glmc_ivec4(ivec3 v3, int last, ivec4 dest);


void
glmc_ivec4_copy(ivec4 a, ivec4 dest);


void 
glmc_ivec4_zero(ivec4 v);


void
glmc_ivec4_one(ivec4 v);


void
glmc_ivec4_add(ivec4 a, ivec4 b, ivec4 dest);


void
glmc_ivec4_adds(ivec4 v, int s, ivec4 dest);


void
glmc_ivec4_sub(ivec4 a, ivec4 b, ivec4 dest);


void
glmc_ivec4_subs(ivec4 v, int s, ivec4 dest);


void
glmc_ivec4_mul(ivec4 a, ivec4 b, ivec4 dest);


void
glmc_ivec4_scale(ivec4 v, int s, ivec4 dest);


int
glmc_ivec4_distance2(ivec4 a, ivec4 b);


float
glmc_ivec4_distance(ivec4 a, ivec4 b);


void
glmc_ivec4_maxv(ivec4 a, ivec4 b, ivec4 dest);


void
glmc_ivec4_minv(ivec4 a, ivec4 b, ivec4 dest);


void
glmc_ivec4_clamp(ivec4 v, int minVal, int maxVal);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_ivec4_h */
