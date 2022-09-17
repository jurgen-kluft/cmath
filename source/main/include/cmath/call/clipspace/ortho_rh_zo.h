#ifndef __CMATH_CALL_CLIPSPACE__ORTHO_RH_ZO_H__
#define __CMATH_CALL_CLIPSPACE__ORTHO_RH_ZO_H__

#include "cmath/cglm.h"

    void glmc_ortho_rh_zo(float left, float right, float bottom, float top, float nearZ, float farZ, mat4 dest);
    void glmc_ortho_aabb_rh_zo(vec3 box[2], mat4 dest);
    void glmc_ortho_aabb_p_rh_zo(vec3 box[2], float padding, mat4 dest);
    void glmc_ortho_aabb_pz_rh_zo(vec3 box[2], float padding, mat4 dest);
    void glmc_ortho_default_rh_zo(float aspect, mat4 dest);
    void glmc_ortho_default_s_rh_zo(float aspect, float size, mat4 dest);


#endif /* cglmc_ortho_rh_zo_h */
