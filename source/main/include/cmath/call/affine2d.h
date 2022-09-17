#ifndef __CMATH_CALL__AFFINE2D_H__
#define __CMATH_CALL__AFFINE2D_H__

#include "cmath/cglm.h"

    void glmc_translate2d_make(mat3 m, vec2 v);
    void glmc_translate2d_to(mat3 m, vec2 v, mat3 dest);
    void glmc_translate2d(mat3 m, vec2 v);
    void glmc_translate2d_x(mat3 m, float to);
    void glmc_translate2d_y(mat3 m, float to);
    void glmc_scale2d_to(mat3 m, vec2 v, mat3 dest);
    void glmc_scale2d_make(mat3 m, vec2 v);
    void glmc_scale2d(mat3 m, vec2 v);
    void glmc_scale2d_uni(mat3 m, float s);
    void glmc_rotate2d_make(mat3 m, float angle);
    void glmc_rotate2d(mat3 m, float angle);
    void glmc_rotate2d_to(mat3 m, float angle, mat3 dest);


#endif /* cglmc_affine2d_h */
