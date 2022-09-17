#ifndef __CMATH_CALL__BEZIER_H__
#define __CMATH_CALL__BEZIER_H__

#include "cmath/cglm.h"

    float glmc_bezier(float s, float p0, float c0, float c1, float p1);
    float glmc_hermite(float s, float p0, float t0, float t1, float p1);
    float glmc_decasteljau(float prm, float p0, float c0, float c1, float p1);


#endif /* cglmc_bezier_h */
