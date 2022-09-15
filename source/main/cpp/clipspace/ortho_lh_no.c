#include "cmath/clipspace/ortho_lh_no.h"
#include "cmath/call/clipspace/ortho_lh_no.h"


void
glmc_ortho_lh_no(float left,    float right,
                 float bottom,  float top,
                 float nearZ, float farZ,
                 mat4  dest) {
  glm_ortho_lh_no(left,   right,
                  bottom, top,
                  nearZ,  farZ,
                  dest);
}


void
glmc_ortho_aabb_lh_no(vec3 box[2], mat4 dest) {
  glm_ortho_aabb_lh_no(box, dest);
}


void
glmc_ortho_aabb_p_lh_no(vec3 box[2], float padding, mat4 dest) {
  glm_ortho_aabb_p_lh_no(box, padding, dest);
}


void
glmc_ortho_aabb_pz_lh_no(vec3 box[2], float padding, mat4 dest) {
  glm_ortho_aabb_pz_lh_no(box, padding, dest);
}


void
glmc_ortho_default_lh_no(float aspect, mat4 dest) {
  glm_ortho_default_lh_no(aspect, dest);
}


void
glmc_ortho_default_s_lh_no(float aspect, float size, mat4 dest) {
  glm_ortho_default_s_lh_no(aspect, size, dest);
}
