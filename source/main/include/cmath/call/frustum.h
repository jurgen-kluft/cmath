#ifndef __CMATH_FRUSTUM_H__
#define __CMATH_FRUSTUM_H__
#ifdef __cplusplus
extern "C"
{
#endif

#include "cmath/cglm.h"

    void glmc_frustum_planes(mat4 m, vec4 dest[6]);
    void glmc_frustum_corners(mat4 invMat, vec4 dest[8]);
    void glmc_frustum_center(vec4 corners[8], vec4 dest);
    void glmc_frustum_box(vec4 corners[8], mat4 m, vec3 box[2]);
    void glmc_frustum_corners_at(vec4 corners[8], float splitDist, float farDist, vec4 planeCorners[4]);
#ifdef __cplusplus
}
#endif
#endif /* cglmc_frustum_h */
