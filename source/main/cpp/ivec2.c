#include "cmath/cglm.h"
#include "cmath/call.h"


void
glmc_ivec2(int * __restrict v, ivec2 dest) {
  glm_ivec2(v, dest);
}


void
glmc_ivec2_copy(ivec2 a, ivec2 dest) {
  glm_ivec2_copy(a, dest);
}


void
glmc_ivec2_zero(ivec2 v) {
  glm_ivec2_zero(v);
}


void
glmc_ivec2_one(ivec2 v) {
  glm_ivec2_one(v);
}


void
glmc_ivec2_add(ivec2 a, ivec2 b, ivec2 dest) {
  glm_ivec2_add(a, b, dest);
}


void
glmc_ivec2_adds(ivec2 v, int s, ivec2 dest) {
  glm_ivec2_adds(v, s, dest);
}


void
glmc_ivec2_sub(ivec2 a, ivec2 b, ivec2 dest) {
  glm_ivec2_sub(a, b, dest);
}


void
glmc_ivec2_subs(ivec2 v, int s, ivec2 dest) {
  glm_ivec2_subs(v, s, dest);
}


void
glmc_ivec2_mul(ivec2 a, ivec2 b, ivec2 dest) {
  glm_ivec2_mul(a, b, dest);
}


void
glmc_ivec2_scale(ivec2 v, int s, ivec2 dest) {
  glm_ivec2_scale(v, s, dest);
}


int
glmc_ivec2_distance2(ivec2 a, ivec2 b) {
  return glm_ivec2_distance2(a, b);
}


float
glmc_ivec2_distance(ivec2 a, ivec2 b) {
  return glm_ivec2_distance(a, b);
}


void
glmc_ivec2_maxv(ivec2 a, ivec2 b, ivec2 dest) {
  glm_ivec2_maxv(a, b, dest);
}


void
glmc_ivec2_minv(ivec2 a, ivec2 b, ivec2 dest) {
  glm_ivec2_minv(a, b, dest);
}


void
glmc_ivec2_clamp(ivec2 v, int minVal, int maxVal) {
  glm_ivec2_clamp(v, minVal, maxVal);
}
