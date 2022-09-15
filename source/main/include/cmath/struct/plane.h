#ifndef __CMATH_PLANE_H__
#define __CMATH_PLANE_H__

#include "cmath/common.h"
#include "cmath/types-struct.h"
#include "cmath/plane.h"
#include "cmath/struct/vec4.h"

/*
 Plane equation:  Ax + By + Cz + D = 0;

 It stored in vec4 as [A, B, C, D]. (A, B, C) is normal and D is distance
*/

/*
 Functions:
   CGLM_INLINE vec4s glms_plane_normalize(vec4s plane);
 */

/*!
 * @brief normalizes a plane
 *
 * @param[in] plane plane to normalize
 * @returns         normalized plane
 */
CGLM_INLINE
vec4s glms_plane_normalize(vec4s plane)
{
    glm_plane_normalize(plane.raw);
    return plane;
}

#endif /* cglms_planes_h */
