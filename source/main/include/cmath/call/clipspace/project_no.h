#ifndef __CMATH_PROJECT_NO_H__
#define __CMATH_PROJECT_NO_H__
#ifdef __cplusplus
extern "C"
{
#endif

#include "cmath/cglm.h"

    void glmc_unprojecti_no(vec3 pos, mat4 invMat, vec4 vp, vec3 dest);
    void glmc_project_no(vec3 pos, mat4 m, vec4 vp, vec3 dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_project_no_h */
