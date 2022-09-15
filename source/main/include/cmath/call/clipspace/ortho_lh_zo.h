#ifndef __CMATH_ORTHO_LH_ZO_H__
#define __CMATH_ORTHO_LH_ZO_H__
#ifdef __cplusplus
extern "C"
{
#endif

#include "cmath/cglm.h"

    void glmc_ortho_lh_zo(float left, float right, float bottom, float top, float nearZ, float farZ, mat4 dest);
    void glmc_ortho_aabb_lh_zo(vec3 box[2], mat4 dest);
    void glmc_ortho_aabb_p_lh_zo(vec3 box[2], float padding, mat4 dest);
    void glmc_ortho_aabb_pz_lh_zo(vec3 box[2], float padding, mat4 dest);
    void glmc_ortho_default_lh_zo(float aspect, mat4 dest);
    void glmc_ortho_default_s_lh_zo(float aspect, float size, mat4 dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_ortho_lh_zo_h */
