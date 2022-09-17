#include "cmath/clipspace/view_rh_zo.h"
#include "cmath/call/clipspace/view_rh_zo.h"

void glmc_lookat_rh_zo(vec3 eye, vec3 center, vec3 up, mat4 dest) { glm_lookat_rh_zo(eye, center, up, dest); }
void glmc_look_rh_zo(vec3 eye, vec3 dir, vec3 up, mat4 dest) { glm_look_rh_zo(eye, dir, up, dest); }
void glmc_look_anyup_rh_zo(vec3 eye, vec3 dir, mat4 dest) { glm_look_anyup_rh_zo(eye, dir, dest); }
