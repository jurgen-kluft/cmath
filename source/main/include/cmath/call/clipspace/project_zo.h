#ifndef __CMATH_PROJECT_ZO_H__
#define __CMATH_PROJECT_ZO_H__
#ifdef __cplusplus
extern "C" {
#endif

#include "cmath/cglm.h"


void
glmc_unprojecti_zo(vec3 pos, mat4 invMat, vec4 vp, vec3 dest);


void
glmc_project_zo(vec3 pos, mat4 m, vec4 vp, vec3 dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_project_zo_h */
