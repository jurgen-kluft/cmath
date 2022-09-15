#include "cmath/cglm.h"
#include "cmath/call.h"


void
glmc_unprojecti(vec3 pos, mat4 invMat, vec4 vp, vec3 dest) {
  glm_unprojecti(pos, invMat, vp, dest);
}


void
glmc_unproject(vec3 pos, mat4 m, vec4 vp, vec3 dest) {
  glm_unproject(pos, m, vp, dest);
}


void
glmc_project(vec3 pos, mat4 m, vec4 vp, vec3 dest) {
  glm_project(pos, m, vp, dest);
}


void
glmc_pickmatrix(vec2 center, vec2 size, vec4 vp, mat4 dest) {
  glm_pickmatrix(center, size, vp, dest);
}
