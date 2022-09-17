#include "cmath/clipspace/view_lh_zo.h"
#include "cmath/call/clipspace/view_lh_zo.h"

void glmc_lookat_lh_zo(vec3 eye, vec3 center, vec3 up, mat4 dest) { glm_lookat_lh_zo(eye, center, up, dest); }
void glmc_look_lh_zo(vec3 eye, vec3 dir, vec3 up, mat4 dest) { glm_look_lh_zo(eye, dir, up, dest); }
void glmc_look_anyup_lh_zo(vec3 eye, vec3 dir, mat4 dest) { glm_look_anyup_lh_zo(eye, dir, dest); }
