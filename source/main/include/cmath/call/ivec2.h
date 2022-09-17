#ifndef __CMATH_CALL__IVEC2_H__
#define __CMATH_CALL__IVEC2_H__

#include "cmath/cglm.h"

    void  glmc_ivec2(int* __restrict v, ivec2 dest);
    void  glmc_ivec2_copy(ivec2 a, ivec2 dest);
    void  glmc_ivec2_zero(ivec2 v);
    void  glmc_ivec2_one(ivec2 v);
    void  glmc_ivec2_add(ivec2 a, ivec2 b, ivec2 dest);
    void  glmc_ivec2_adds(ivec2 v, int s, ivec2 dest);
    void  glmc_ivec2_sub(ivec2 a, ivec2 b, ivec2 dest);
    void  glmc_ivec2_subs(ivec2 v, int s, ivec2 dest);
    void  glmc_ivec2_mul(ivec2 a, ivec2 b, ivec2 dest);
    void  glmc_ivec2_scale(ivec2 v, int s, ivec2 dest);
    int   glmc_ivec2_distance2(ivec2 a, ivec2 b);
    float glmc_ivec2_distance(ivec2 a, ivec2 b);
    void  glmc_ivec2_maxv(ivec2 a, ivec2 b, ivec2 dest);
    void  glmc_ivec2_minv(ivec2 a, ivec2 b, ivec2 dest);
    void  glmc_ivec2_clamp(ivec2 v, int minVal, int maxVal);


#endif /* cglmc_ivec2_h */
