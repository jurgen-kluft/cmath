#include "cmath/cglm.h"
#include "cmath/call.h"

void glmc_ivec3(ivec4 v4, ivec3 dest) { glm_ivec3(v4, dest); }
void glmc_ivec3_copy(ivec3 a, ivec3 dest) { glm_ivec3_copy(a, dest); }
void glmc_ivec3_zero(ivec3 v) { glm_ivec3_zero(v); }
void glmc_ivec3_one(ivec3 v) { glm_ivec3_one(v); }
void glmc_ivec3_add(ivec3 a, ivec3 b, ivec3 dest) { glm_ivec3_add(a, b, dest); }
void glmc_ivec3_adds(ivec3 v, int s, ivec3 dest) { glm_ivec3_adds(v, s, dest); }
void glmc_ivec3_sub(ivec3 a, ivec3 b, ivec3 dest) { glm_ivec3_sub(a, b, dest); }
void glmc_ivec3_subs(ivec3 v, int s, ivec3 dest) { glm_ivec3_subs(v, s, dest); }
void glmc_ivec3_mul(ivec3 a, ivec3 b, ivec3 dest) { glm_ivec3_mul(a, b, dest); }
void glmc_ivec3_scale(ivec3 v, int s, ivec3 dest) { glm_ivec3_scale(v, s, dest); }
int glmc_ivec3_distance2(ivec3 a, ivec3 b) { return glm_ivec3_distance2(a, b); }
float glmc_ivec3_distance(ivec3 a, ivec3 b) { return glm_ivec3_distance(a, b); }
void glmc_ivec3_maxv(ivec3 a, ivec3 b, ivec3 dest) { glm_ivec3_maxv(a, b, dest); }
void glmc_ivec3_minv(ivec3 a, ivec3 b, ivec3 dest) { glm_ivec3_minv(a, b, dest); }
void glmc_ivec3_clamp(ivec3 v, int minVal, int maxVal) { glm_ivec3_clamp(v, minVal, maxVal); }
