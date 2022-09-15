#ifndef __CMATH_BEZIER_H__
#define __CMATH_BEZIER_H__
#ifdef __cplusplus
extern "C" {
#endif

#include "cmath/cglm.h"


float
glmc_bezier(float s, float p0, float c0, float c1, float p1);


float
glmc_hermite(float s, float p0, float t0, float t1, float p1);


float
glmc_decasteljau(float prm, float p0, float c0, float c1, float p1);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_bezier_h */
