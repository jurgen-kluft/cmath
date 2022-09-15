#include "cmath/clipspace/view_rh_no.h"
#include "cmath/call/clipspace/view_rh_no.h"


void
glmc_lookat_rh_no(vec3 eye, vec3 center, vec3 up, mat4 dest) {
  glm_lookat_rh_no(eye, center, up, dest);
}


void
glmc_look_rh_no(vec3 eye, vec3 dir, vec3 up, mat4 dest) {
  glm_look_rh_no(eye, dir, up, dest);
}


void
glmc_look_anyup_rh_no(vec3 eye, vec3 dir, mat4 dest) {
  glm_look_anyup_rh_no(eye, dir, dest);
}
