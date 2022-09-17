#ifndef __CMATH_CALL_CLIPSPACE__PROJECT_ZO_H__
#define __CMATH_CALL_CLIPSPACE__PROJECT_ZO_H__


#include "cmath/cglm.h"

    void glmc_unprojecti_zo(vec3 pos, mat4 invMat, vec4 vp, vec3 dest);
    void glmc_project_zo(vec3 pos, mat4 m, vec4 vp, vec3 dest);


#endif /* __CMATH_CALL_CLIPSPACE__PROJECT_ZO_H__ */
