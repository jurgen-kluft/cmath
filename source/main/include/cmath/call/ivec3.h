#ifndef __CMATH_CALL__IVEC3_H__
#define __CMATH_CALL__IVEC3_H__

#include "cmath/cglm.h"

    void  glmc_ivec3(ivec4 v4, ivec3 dest);
    void  glmc_ivec3_copy(ivec3 a, ivec3 dest);
    void  glmc_ivec3_zero(ivec3 v);
    void  glmc_ivec3_one(ivec3 v);
    void  glmc_ivec3_add(ivec3 a, ivec3 b, ivec3 dest);
    void  glmc_ivec3_adds(ivec3 v, int s, ivec3 dest);
    void  glmc_ivec3_sub(ivec3 a, ivec3 b, ivec3 dest);
    void  glmc_ivec3_subs(ivec3 v, int s, ivec3 dest);
    void  glmc_ivec3_mul(ivec3 a, ivec3 b, ivec3 dest);
    void  glmc_ivec3_scale(ivec3 v, int s, ivec3 dest);
    int   glmc_ivec3_distance2(ivec3 a, ivec3 b);
    float glmc_ivec3_distance(ivec3 a, ivec3 b);
    void  glmc_ivec3_maxv(ivec3 a, ivec3 b, ivec3 dest);
    void  glmc_ivec3_minv(ivec3 a, ivec3 b, ivec3 dest);
    void  glmc_ivec3_clamp(ivec3 v, int minVal, int maxVal);


#endif /* __CMATH_CALL__IVEC3_H__ */
