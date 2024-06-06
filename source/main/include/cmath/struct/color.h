/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

#ifndef cglms_colors_h
#define cglms_colors_h

#include "cmath/common.h"
#include "cmath/types-struct.h"
#include "cmath/color.h"
#include "cmath/struct/vec3.h"

/*!
 * @brief averages the color channels into one value
 *
 * @param[in]  rgb RGB color
 */
CGLM_INLINE
float
glms_luminance(vec3s rgb) {
  return glm_luminance(rgb.raw);
}

#endif /* cglms_colors_h */
