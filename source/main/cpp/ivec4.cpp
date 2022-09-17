#include "cmath/cglm.h"
#include "cmath/call.h"

void glmc_ivec4(ivec3 v3, int last, ivec4 dest) { glm_ivec4(v3, last, dest); }
void glmc_ivec4_copy(ivec4 a, ivec4 dest) { glm_ivec4_copy(a, dest); }
void glmc_ivec4_zero(ivec4 v) { glm_ivec4_zero(v); }
void glmc_ivec4_one(ivec4 v) { glm_ivec4_one(v); }
void glmc_ivec4_add(ivec4 a, ivec4 b, ivec4 dest) { glm_ivec4_add(a, b, dest); }
void glmc_ivec4_adds(ivec4 v, int s, ivec4 dest) { glm_ivec4_adds(v, s, dest); }
void glmc_ivec4_sub(ivec4 a, ivec4 b, ivec4 dest) { glm_ivec4_sub(a, b, dest); }
void glmc_ivec4_subs(ivec4 v, int s, ivec4 dest) { glm_ivec4_subs(v, s, dest); }
void glmc_ivec4_mul(ivec4 a, ivec4 b, ivec4 dest) { glm_ivec4_mul(a, b, dest); }
void glmc_ivec4_scale(ivec4 v, int s, ivec4 dest) { glm_ivec4_scale(v, s, dest); }
int glmc_ivec4_distance2(ivec4 a, ivec4 b) { return glm_ivec4_distance2(a, b); }
float glmc_ivec4_distance(ivec4 a, ivec4 b) { return glm_ivec4_distance(a, b); }
void glmc_ivec4_maxv(ivec4 a, ivec4 b, ivec4 dest) { glm_ivec4_maxv(a, b, dest); }
void glmc_ivec4_minv(ivec4 a, ivec4 b, ivec4 dest) { glm_ivec4_minv(a, b, dest); }
void glmc_ivec4_clamp(ivec4 v, int minVal, int maxVal) { glm_ivec4_clamp(v, minVal, maxVal); }
