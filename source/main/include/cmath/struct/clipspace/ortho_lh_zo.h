#ifndef __CMATH_STRUCT_CLIPSPACE_ORTHO_LH_ZO_H__
#define __CMATH_STRUCT_CLIPSPACE_ORTHO_LH_ZO_H__

#include "cmath/common.h"
#include "cmath/types-struct.h"
#include "cmath/plane.h"
#include "cmath/cam.h"
#include "cmath/vec3.h"
#include "cmath/clipspace/ortho_lh_zo.h"

/*!
 * @brief set up orthographic projection matrix
 *        with a left-hand coordinate system and a
 *        clip-space of [0, 1].
 *
 * @param[in]  left    viewport.left
 * @param[in]  right   viewport.right
 * @param[in]  bottom  viewport.bottom
 * @param[in]  top     viewport.top
 * @param[in]  nearZ   near clipping plane
 * @param[in]  farZ    far clipping plane
 * @returns    result matrix
 */
CGLM_INLINE
mat4s
glms_ortho_lh_zo(float left,   float right,
                 float bottom, float top,
                 float nearZ,  float farZ) {
  mat4s dest;
  glm_ortho_lh_zo(left, right, bottom, top, nearZ, farZ, dest.raw);
  return dest;
}

/*!
 * @brief set up orthographic projection matrix using bounding box
 *        with a left-hand coordinate system and a
 *        clip-space of [0, 1].
 *
 * bounding box (AABB) must be in view space
 *
 * @param[in]  box   AABB
 * @returns    result matrix
 */
CGLM_INLINE
mat4s
glms_ortho_aabb_lh_zo(vec3s box[2]) {
  mat4s dest;
  vec3  rawBox[2];

  glms_vec3_(unpack)(rawBox, box, 2);
  glm_ortho_aabb_lh_zo(rawBox, dest.raw);

  return dest;
}

/*!
 * @brief set up orthographic projection matrix using bounding box
 *        with a left-hand coordinate system and a
 *        clip-space of [0, 1].
 *
 * bounding box (AABB) must be in view space
 *
 * @param[in]  box     AABB
 * @param[in]  padding padding
 * @returns    result matrix
 */
CGLM_INLINE
mat4s
glms_ortho_aabb_p_lh_zo(vec3s box[2], float padding) {
  mat4s dest;
  vec3  rawBox[2];

  glms_vec3_(unpack)(rawBox, box, 2);
  glm_ortho_aabb_p_lh_zo(rawBox, padding, dest.raw);

  return dest;
}

/*!
 * @brief set up orthographic projection matrix using bounding box
 *        with a left-hand coordinate system and a
 *        clip-space of [0, 1].
 *
 * bounding box (AABB) must be in view space
 *
 * @param[in]  box     AABB
 * @param[in]  padding padding for near and far
 * @returns    result matrix
 */
CGLM_INLINE
mat4s
glms_ortho_aabb_pz_lh_zo(vec3s box[2], float padding) {
  mat4s dest;
  vec3  rawBox[2];

  glms_vec3_(unpack)(rawBox, box, 2);
  glm_ortho_aabb_pz_lh_zo(rawBox, padding, dest.raw);

  return dest;
}

/*!
 * @brief set up unit orthographic projection matrix
 *        with a left-hand coordinate system and a
 *        clip-space of [0, 1].
 *
 * @param[in]  aspect aspect ration ( width / height )
 * @returns    result matrix
 */
CGLM_INLINE
mat4s
glms_ortho_default_lh_zo(float aspect) {
  mat4s dest;
  glm_ortho_default_lh_zo(aspect, dest.raw);
  return dest;
}

/*!
 * @brief set up orthographic projection matrix with given CUBE size
 *        with a left-hand coordinate system and a
 *        clip-space of [0, 1].
 *
 * @param[in]  aspect aspect ratio ( width / height )
 * @param[in]  size   cube size
 * @returns    result matrix
 */
CGLM_INLINE
mat4s
glms_ortho_default_s_lh_zo(float aspect, float size) {
  mat4s dest;
  glm_ortho_default_s_lh_zo(aspect, size, dest.raw);
  return dest;
}

#endif /* cglms_ortho_lh_zo_h */
