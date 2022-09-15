#ifndef __CMATH_COLOR_H__
#define __CMATH_COLOR_H__

#include "cmath/common.h"
#include "cmath/vec3.h"

/*!
 * @brief averages the color channels into one value
 *
 * @param[in]  rgb RGB color
 */
CGLM_INLINE
float glm_luminance(vec3 rgb)
{
    vec3 l = {0.212671f, 0.715160f, 0.072169f};
    return glm_dot(rgb, l);
}

#endif /* cglm_color_h */
