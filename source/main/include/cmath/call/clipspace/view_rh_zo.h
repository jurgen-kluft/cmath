#ifndef __CMATH_VIEW_RH_ZO_H__
#define __CMATH_VIEW_RH_ZO_H__
#ifdef __cplusplus
extern "C" {
#endif

#include "cmath/cglm.h"


void
glmc_lookat_rh_zo(vec3 eye, vec3 center, vec3 up, mat4 dest);


void
glmc_look_rh_zo(vec3 eye, vec3 dir, vec3 up, mat4 dest);


void
glmc_look_anyup_rh_zo(vec3 eye, vec3 dir, mat4 dest);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_view_rh_zo_h */
