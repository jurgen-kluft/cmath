#ifndef __CMATH_CALL_CLIPSPACE__ORTHO_RH_NO_H__
#define __CMATH_CALL_CLIPSPACE__ORTHO_RH_NO_H__

#include "cmath/cglm.h"

    void glmc_ortho_rh_no(float left, float right, float bottom, float top, float nearZ, float farZ, mat4 dest);
    void glmc_ortho_aabb_rh_no(vec3 box[2], mat4 dest);
    void glmc_ortho_aabb_p_rh_no(vec3 box[2], float padding, mat4 dest);
    void glmc_ortho_aabb_pz_rh_no(vec3 box[2], float padding, mat4 dest);
    void glmc_ortho_default_rh_no(float aspect, mat4 dest);
    void glmc_ortho_default_s_rh_no(float aspect, float size, mat4 dest);


#endif /* cglmc_ortho_rh_no_h */