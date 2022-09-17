#include "cmath/clipspace/ortho_lh_zo.h"
#include "cmath/call/clipspace/ortho_lh_zo.h"

void glmc_ortho_lh_zo(float left, float right, float bottom, float top, float nearZ, float farZ, mat4 dest) { glm_ortho_lh_zo(left, right, bottom, top, nearZ, farZ, dest); }
void glmc_ortho_aabb_lh_zo(vec3 box[2], mat4 dest) { glm_ortho_aabb_lh_zo(box, dest); }
void glmc_ortho_aabb_p_lh_zo(vec3 box[2], float padding, mat4 dest) { glm_ortho_aabb_p_lh_zo(box, padding, dest); }
void glmc_ortho_aabb_pz_lh_zo(vec3 box[2], float padding, mat4 dest) { glm_ortho_aabb_pz_lh_zo(box, padding, dest); }
void glmc_ortho_default_lh_zo(float aspect, mat4 dest) { glm_ortho_default_lh_zo(aspect, dest); }
void glmc_ortho_default_s_lh_zo(float aspect, float size, mat4 dest) { glm_ortho_default_s_lh_zo(aspect, size, dest); }
