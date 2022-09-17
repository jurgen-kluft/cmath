
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
#include "cmath/test/test_mat3.h"
#include "cmath/test/test_mat4.h"
#include "cmath/test/test_quat.h"
#include "cmath/test/test_project.h"
#include "cmath/test/test_plane.h"
#include "cmath/test/test_affine.h"
#include "cmath/test/test_affine2d.h"
#include "cmath/test/test_affine_mat.h"
#include "cmath/test/test_ray.h"
#include "cmath/test/test_camera.h"

#undef GLM
#undef GLM_PREFIX

/* test pre-compiled  */
/*---------------------------------------------------------------------------*/

#define GLM_PREFIX glmc_
#define GLM(X) (glmc_ ## X)

#include "cmath/test/test_vec2.h"
#include "cmath/test/test_vec3.h"
#include "cmath/test/test_vec4.h"
#include "cmath/test/test_ivec2.h"
#include "cmath/test/test_ivec3.h"
#include "cmath/test/test_ivec4.h"
#include "cmath/test/test_mat2.h"
#include "cmath/test/test_mat3.h"
#include "cmath/test/test_mat4.h"
#include "cmath/test/test_quat.h"
#include "cmath/test/test_project.h"
#include "cmath/test/test_plane.h"
#include "cmath/test/test_affine.h"
#include "cmath/test/test_affine2d.h"
#include "cmath/test/test_affine_mat.h"
#include "cmath/test/test_ray.h"
#include "cmath/test/test_camera.h"

#undef GLM
#undef GLM_PREFIX

/*---------------------------------------------------------------------------*/
