#ifndef __CMATH_VIEW_LH_ZO_H__
#define __CMATH_VIEW_LH_ZO_H__

#ifdef __cplusplus
extern "C"
{
#endif

#include "cmath/cglm.h"

    void glmc_lookat_lh_zo(vec3 eye, vec3 center, vec3 up, mat4 dest);
    void glmc_look_lh_zo(vec3 eye, vec3 dir, vec3 up, mat4 dest);
    void glmc_look_anyup_lh_zo(vec3 eye, vec3 dir, mat4 dest);

#ifdef __cplusplus
}
#endif
#endif /* __CMATH_VIEW_LH_ZO_H__ */
