/*
 * Copyright (c), Recep Aslantas.
 *
 * MIT License (MIT), http://opensource.org/licenses/MIT
 * Full license can be found in the LICENSE file
 */

/* test inline  */
/*---------------------------------------------------------------------------*/


#define GLM_PREFIX glm_
#define GLM(X) (glm_ ## X)

#include "cmath/test/test_vec2.h"
#include "cmath/test/test_vec3.h"
#include "cmath/test/test_vec4.h"
#include "cmath/test/test_ivec2.h"
#include "cmath/test/test_ivec3.h"
#include "cmath/test/test_ivec4.h"
#include "cmath/test/test_mat2.h"
#include "cmath/test/test_mat2x3.h"
#include "cmath/test/test_mat2x4.h"
#include "cmath/test/test_mat3.h"
#include "cmath/test/test_mat3x2.h"
#include "cmath/test/test_mat3x4.h"
#include "cmath/test/test_mat4.h"
#include "cmath/test/test_mat4x2.h"
#include "cmath/test/test_mat4x3.h"
#include "cmath/test/test_quat.h"
#include "cmath/test/test_project.h"
#include "cmath/test/test_plane.h"
#include "cmath/test/test_affine.h"
#include "cmath/test/test_affine2d.h"
#include "cmath/test/test_affine_mat.h"
#include "cmath/test/test_ray.h"
#include "cmath/test/test_cam.h"
#include "cmath/test/test_cam_lh_no.h"
#include "cmath/test/test_cam_lh_zo.h"
#include "cmath/test/test_cam_rh_no.h"
#include "cmath/test/test_cam_rh_zo.h"
#include "cmath/test/test_euler_to_quat_rh.h"
#include "cmath/test/test_euler_to_quat_lh.h"

#undef GLM
#undef GLM_PREFIX
