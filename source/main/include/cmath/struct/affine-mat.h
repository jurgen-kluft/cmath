#ifndef __CMATH_STRUCT_AFFINE_MAT_H__
#define __CMATH_STRUCT_AFFINE_MAT_H__

#include "cmath/common.h"
#include "cmath/types-struct.h"
#include "cmath/affine-mat.h"
#include "cmath/struct/vec3.h"
#include "cmath/struct/vec4.h"
#include "cmath/struct/mat4.h"

/*!
 * @brief this is similar to glms_mat4_mul but specialized to affine transform
 *
 * Matrix format should be:
 *   R  R  R  X
 *   R  R  R  Y
 *   R  R  R  Z
 *   0  0  0  W
 *
 * this reduces some multiplications. It should be faster than mat4_mul.
 * if you are not sure about matrix format then DON'T use this! use mat4_mul
 *
 * @param[in]   m1    affine matrix 1
 * @param[in]   m2    affine matrix 2
 * @returns         destination matrix
 */
CGLM_INLINE
mat4s
glms_mul(mat4s m1, mat4s m2){
  mat4s r;
  glm_mul(m1.raw, m2.raw, r.raw);
  return r;
}

/*!
 * @brief this is similar to glm_mat4_mul but specialized to affine transform
 *
 * Right Matrix format should be:
 *   R  R  R  0
 *   R  R  R  0
 *   R  R  R  0
 *   0  0  0  1
 *
 * this reduces some multiplications. It should be faster than mat4_mul.
 * if you are not sure about matrix format then DON'T use this! use mat4_mul
 *
 * @param[in]   m1    affine matrix 1
 * @param[in]   m2    affine matrix 2
 * @returns         destination matrix
 */
CGLM_INLINE
mat4s
glms_mul_rot(mat4s m1, mat4s m2){
  mat4s r;
  glm_mul_rot(m1.raw, m2.raw, r.raw);
  return r;
}

/*!
 * @brief inverse orthonormal rotation + translation matrix (ridig-body)
 *
 * @code
 * X = | R  T |   X' = | R' -R'T |
 *     | 0  1 |        | 0     1 |
 * @endcode
 *
 * @param[in]  m  matrix
 * @returns      destination matrix
 */
CGLM_INLINE
mat4s
glms_inv_tr(mat4s m){
  glm_inv_tr(m.raw);
  return m;
}
#endif /* cglms_affine_mat_h */
