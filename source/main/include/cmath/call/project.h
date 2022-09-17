#ifndef __CMATH_CALL__PROJECT_H__
#define __CMATH_CALL__PROJECT_H__

#include "cmath/cglm.h"

    void glmc_unprojecti(vec3 pos, mat4 invMat, vec4 vp, vec3 dest);
    void glmc_unproject(vec3 pos, mat4 m, vec4 vp, vec3 dest);
    void glmc_project(vec3 pos, mat4 m, vec4 vp, vec3 dest);
    void glmc_pickmatrix(vec2 center, vec2 size, vec4 vp, mat4 dest);


#endif /* cglmc_project_h */
