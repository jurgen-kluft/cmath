#ifndef __CMATH_PROJECT_ZO_H__
#define __CMATH_PROJECT_ZO_H__

#include "cmath/common.h"
#include "cmath/vec3.h"
#include "cmath/vec4.h"
#include "cmath/mat4.h"

/*!
 * @brief maps the specified viewport coordinates into specified space [1]
 *        the matrix should contain projection matrix.
 *
 * if you don't have ( and don't want to have ) an inverse matrix then use
 * glm_unproject version. You may use existing inverse of matrix in somewhere
 * else, this is why glm_unprojecti exists to save save inversion cost
 *
 * [1] space:
 *  1- if m = invProj:     View Space
 *  2- if m = invViewProj: World Space
 *  3- if m = invMVP:      Object Space
 *
 * You probably want to map the coordinates into object space
 * so use invMVP as m
 *
 * Computing viewProj:
 *   glm_mat4_mul(proj, view, viewProj);
 *   glm_mat4_mul(viewProj, model, MVP);
 *   glm_mat4_inv(viewProj, invMVP);
 *
 * @param[in]  pos      point/position in viewport coordinates
 * @param[in]  invMat   matrix (see brief)
 * @param[in]  vp       viewport as [x, y, width, height]
 * @param[out] dest     unprojected coordinates
 */
CGLM_INLINE
void
glm_unprojecti_zo(vec3 pos, mat4 invMat, vec4 vp, vec3 dest) {
  vec4 v;

  v[0] = 2.0f * (pos[0] - vp[0]) / vp[2] - 1.0f;
  v[1] = 2.0f * (pos[1] - vp[1]) / vp[3] - 1.0f;
  v[2] = pos[2];
  v[3] = 1.0f;

  glm_mat4_mulv(invMat, v, v);
  glm_vec4_scale(v, 1.0f / v[3], v);
  glm_vec3(v, dest);
}

/*!
 * @brief map object coordinates to window coordinates
 *
 * Computing MVP:
 *   glm_mat4_mul(proj, view, viewProj);
 *   glm_mat4_mul(viewProj, model, MVP);
 *
 * @param[in]  pos      object coordinates
 * @param[in]  m        MVP matrix
 * @param[in]  vp       viewport as [x, y, width, height]
 * @param[out] dest     projected coordinates
 */
CGLM_INLINE
void
glm_project_zo(vec3 pos, mat4 m, vec4 vp, vec3 dest) {
  CGLM_ALIGN(16) vec4 pos4;

  glm_vec4(pos, 1.0f, pos4);

  glm_mat4_mulv(m, pos4, pos4);
  glm_vec4_scale(pos4, 1.0f / pos4[3], pos4); /* pos = pos / pos.w */

  dest[2] = pos4[2];
  
  glm_vec4_scale(pos4, 0.5f, pos4);
  glm_vec4_adds(pos4,  0.5f, pos4);

  dest[0] = pos4[0] * vp[2] + vp[0];
  dest[1] = pos4[1] * vp[3] + vp[1];
}

#endif /* cglm_project_zo_h */
