#ifndef __CMATH_STRUCT_AFFINE_POST_H__
#define __CMATH_STRUCT_AFFINE_POST_H__

#include "cmath/common.h"
#include "cmath/types-struct.h"
#include "cmath/affine.h"
#include "cmath/struct/vec3.h"
#include "cmath/struct/vec4.h"
#include "cmath/struct/mat4.h"

/*!
 * @brief translate existing transform matrix by v vector
 *        and stores result in same matrix
 *
 * @param[in]       m   affine transform
 * @param[in]       v   translate vector [x, y, z]
 * @returns             affine transform
 */
CGLM_INLINE
mat4s
glms_translated(mat4s m, vec3s v) {
  glm_translated(m.raw, v.raw);
  return m;
}

/*!
 * @brief translate existing transform matrix by x factor
 *
 * @param[in]       m   affine transform
 * @param[in]       x   x factor
 * @returns             affine transform
 */
CGLM_INLINE
mat4s
glms_translated_x(mat4s m, float x) {
  glm_translated_x(m.raw, x);
  return m;
}

/*!
 * @brief translate existing transform matrix by y factor
 *
 * @param[in]       m   affine transform
 * @param[in]       y   y factor
 * @returns             affine transform
 */
CGLM_INLINE
mat4s
glms_translated_y(mat4s m, float y) {
  glm_translated_y(m.raw, y);
  return m;
}

/*!
 * @brief translate existing transform matrix by z factor
 *
 * @param[in]       m   affine transform
 * @param[in]       z   z factor
 * @returns             affine transform
 */
CGLM_INLINE
mat4s
glms_translated_z(mat4s m, float z) {
  glm_translated_z(m.raw, z);
  return m;
}

/*!
 * @brief rotate existing transform matrix around X axis by angle
 *        and store result in dest
 *
 * @param[in]   m       affine transform
 * @param[in]   angle   angle (radians)
 * @returns             rotated matrix
 */
CGLM_INLINE
mat4s
glms_rotated_x(mat4s m, float angle) {
  mat4s r;
  glm_rotated_x(m.raw, angle, r.raw);
  return r;
}

/*!
 * @brief rotate existing transform matrix around Y axis by angle
 *        and store result in dest
 *
 * @param[in]   m       affine transform
 * @param[in]   angle   angle (radians)
 * @returns             rotated matrix
 */
CGLM_INLINE
mat4s
glms_rotated_y(mat4s m, float angle) {
  mat4s r;
  glm_rotated_y(m.raw, angle, r.raw);
  return r;
}

/*!
 * @brief rotate existing transform matrix around Z axis by angle
 *        and store result in dest
 *
 * @param[in]   m       affine transform
 * @param[in]   angle   angle (radians)
 * @returns             rotated matrix
 */
CGLM_INLINE
mat4s
glms_rotated_z(mat4s m, float angle) {
  mat4s r;
  glm_rotated_z(m.raw, angle, r.raw);
  return r;
}

/*!
 * @brief rotate existing transform matrix around given axis by angle
 *
 * @param[in]       m       affine transform
 * @param[in]       angle   angle (radians)
 * @param[in]       axis    axis
 * @returns                affine transform
 */
CGLM_INLINE
mat4s
glms_rotated(mat4s m, float angle, vec3s axis) {
  glm_rotated(m.raw, angle, axis.raw);
  return m;
}

/*!
 * @brief rotate existing transform
 *        around given axis by angle at given pivot point (rotation center)
 *
 * @param[in]       m       affine transform
 * @param[in]       pivot   rotation center
 * @param[in]       angle   angle (radians)
 * @param[in]       axis    axis
 * @returns                 affine transform
 */
CGLM_INLINE
mat4s
glms_rotated_at(mat4s m, vec3s pivot, float angle, vec3s axis) {
  glm_rotated_at(m.raw, pivot.raw, angle, axis.raw);
  return m;
}

/*!
 * @brief rotate existing transform matrix around given axis by angle around self (doesn't affected by position)
 *
 * @param[in]       m       affine transform
 * @param[in]       angle   angle (radians)
 * @param[in]       axis    axis
 * @returns                affine transform
 */
CGLM_INLINE
mat4s
glms_spinned(mat4s m, float angle, vec3s axis) {
  glm_spinned(m.raw, angle, axis.raw);
  return m;
}

#endif /* cglms_affines_post_h */
