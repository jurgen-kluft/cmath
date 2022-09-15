#include "cmath/clipspace/project_no.h"
#include "cmath/call/clipspace/project_no.h"


void
glmc_unprojecti_no(vec3 pos, mat4 invMat, vec4 vp, vec3 dest) {
  glm_unprojecti_no(pos, invMat, vp, dest);
}


void
glmc_project_no(vec3 pos, mat4 m, vec4 vp, vec3 dest) {
  glm_project_no(pos, m, vp, dest);
}
