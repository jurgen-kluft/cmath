#ifndef __CMATH_COMMON_H__
#    define __CMATH_COMMON_H__

#    ifndef _USE_MATH_DEFINES
#        define _USE_MATH_DEFINES /* for windows */
#    endif

#    ifndef _CRT_SECURE_NO_WARNINGS
#        define _CRT_SECURE_NO_WARNINGS /* for windows */
#    endif

#    include <stdint.h>
#    include <stddef.h>
#    include <math.h>
#    include <float.h>
#    include <stdbool.h>

#    if defined(_MSC_VER)
#        ifdef CGLM_STATIC
#            define
#        elif defined(S)
#            define __declspec(dllexport)
#        else
#            define __declspec(dllimport)
#        endif
#        define CGLM_INLINE __forceinline
#    else
#        define CGLM_INLINE static inline __attribute((always_inline))
#    endif

#    define GLM_SHUFFLE4(z, y, x, w) (((z) << 6) | ((y) << 4) | ((x) << 2) | (w))
#    define GLM_SHUFFLE3(z, y, x)    (((z) << 4) | ((y) << 2) | (x))

#    include "cmath/types.h"
#    include "cmath/simd/intrin.h"

#    ifndef CGLM_USE_DEFAULT_EPSILON
#        ifndef GLM_FLT_EPSILON
#            define GLM_FLT_EPSILON 1e-5
#        endif
#    else
#        define GLM_FLT_EPSILON FLT_EPSILON
#    endif

/*
 * Clip control: define CGLM_FORCE_DEPTH_ZERO_TO_ONE before including
 * CGLM to use a clip space between 0 to 1.
 * Coordinate system: define CGLM_FORCE_LEFT_HANDED before including
 * CGLM to use the left handed coordinate system by default.
 */

#    define CGLM_CLIP_CONTROL_ZO_BIT (1 << 0) /* ZERO_TO_ONE */
#    define CGLM_CLIP_CONTROL_NO_BIT (1 << 1) /* NEGATIVE_ONE_TO_ONE */
#    define CGLM_CLIP_CONTROL_LH_BIT (1 << 2) /* LEFT_HANDED, For DirectX, Metal, Vulkan */
#    define CGLM_CLIP_CONTROL_RH_BIT (1 << 3) /* RIGHT_HANDED, For OpenGL, default in GLM */

#    define CGLM_CLIP_CONTROL_LH_ZO (CGLM_CLIP_CONTROL_LH_BIT | CGLM_CLIP_CONTROL_ZO_BIT)
#    define CGLM_CLIP_CONTROL_LH_NO (CGLM_CLIP_CONTROL_LH_BIT | CGLM_CLIP_CONTROL_NO_BIT)
#    define CGLM_CLIP_CONTROL_RH_ZO (CGLM_CLIP_CONTROL_RH_BIT | CGLM_CLIP_CONTROL_ZO_BIT)
#    define CGLM_CLIP_CONTROL_RH_NO (CGLM_CLIP_CONTROL_RH_BIT | CGLM_CLIP_CONTROL_NO_BIT)

#    ifdef CGLM_FORCE_DEPTH_ZERO_TO_ONE
#        ifdef CGLM_FORCE_LEFT_HANDED
#            define CGLM_CONFIG_CLIP_CONTROL CGLM_CLIP_CONTROL_LH_ZO
#        else
#            define CGLM_CONFIG_CLIP_CONTROL CGLM_CLIP_CONTROL_RH_ZO
#        endif
#    else
#        ifdef CGLM_FORCE_LEFT_HANDED
#            define CGLM_CONFIG_CLIP_CONTROL CGLM_CLIP_CONTROL_LH_NO
#        else
#            define CGLM_CONFIG_CLIP_CONTROL CGLM_CLIP_CONTROL_RH_NO
#        endif
#    endif

#endif /* cglm_common_h */
