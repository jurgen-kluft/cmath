#include "cmath/cglm.h"
#include "cmath/call.h"

void glmc_vec2(float* __restrict v, vec2 dest) { glm_vec2(v, dest); }
void glmc_vec2_copy(vec2 a, vec2 dest) { glm_vec2_copy(a, dest); }
void glmc_vec2_zero(vec2 v) { glm_vec2_zero(v); }
void glmc_vec2_one(vec2 v) { glm_vec2_one(v); }
float glmc_vec2_dot(vec2 a, vec2 b) { return glm_vec2_dot(a, b); }
float glmc_vec2_cross(vec2 a, vec2 b) { return glm_vec2_cross(a, b); }
float glmc_vec2_norm2(vec2 v) { return glm_vec2_norm2(v); }
float glmc_vec2_norm(vec2 v) { return glm_vec2_norm(v); }
void glmc_vec2_add(vec2 a, vec2 b, vec2 dest) { glm_vec2_add(a, b, dest); }
void glmc_vec2_adds(vec2 v, float s, vec2 dest) { glm_vec2_adds(v, s, dest); }
void glmc_vec2_sub(vec2 a, vec2 b, vec2 dest) { glm_vec2_sub(a, b, dest); }
void glmc_vec2_subs(vec2 v, float s, vec2 dest) { glm_vec2_subs(v, s, dest); }
void glmc_vec2_mul(vec2 a, vec2 b, vec2 dest) { glm_vec2_mul(a, b, dest); }
void glmc_vec2_scale(vec2 v, float s, vec2 dest) { glm_vec2_scale(v, s, dest); }
void glmc_vec2_scale_as(vec2 v, float s, vec2 dest) { glm_vec2_scale_as(v, s, dest); }
void glmc_vec2_div(vec2 a, vec2 b, vec2 dest) { glm_vec2_div(a, b, dest); }
void glmc_vec2_divs(vec2 v, float s, vec2 dest) { glm_vec2_divs(v, s, dest); }
void glmc_vec2_addadd(vec2 a, vec2 b, vec2 dest) { glm_vec2_addadd(a, b, dest); }
void glmc_vec2_subadd(vec2 a, vec2 b, vec2 dest) { glm_vec2_subadd(a, b, dest); }
void glmc_vec2_muladd(vec2 a, vec2 b, vec2 dest) { glm_vec2_muladd(a, b, dest); }
void glmc_vec2_muladds(vec2 a, float s, vec2 dest) { glm_vec2_muladds(a, s, dest); }
void glmc_vec2_maxadd(vec2 a, vec2 b, vec2 dest) { glm_vec2_maxadd(a, b, dest); }
void glmc_vec2_minadd(vec2 a, vec2 b, vec2 dest) { glm_vec2_minadd(a, b, dest); }
void glmc_vec2_negate_to(vec2 v, vec2 dest) { glm_vec2_negate_to(v, dest); }
void glmc_vec2_negate(vec2 v) { glm_vec2_negate(v); }
void glmc_vec2_normalize(vec2 v) { glm_vec2_normalize(v); }
void glmc_vec2_normalize_to(vec2 v, vec2 dest) { glm_vec2_normalize_to(v, dest); }
void glmc_vec2_rotate(vec2 v, float angle, vec2 dest) { glm_vec2_rotate(v, angle, dest); }
float glmc_vec2_distance2(vec2 a, vec2 b) { return glm_vec2_distance2(a, b); }
float glmc_vec2_distance(vec2 a, vec2 b) { return glm_vec2_distance(a, b); }
void glmc_vec2_maxv(vec2 a, vec2 b, vec2 dest) { glm_vec2_maxv(a, b, dest); }
void glmc_vec2_minv(vec2 a, vec2 b, vec2 dest) { glm_vec2_minv(a, b, dest); }
void glmc_vec2_clamp(vec2 v, float minval, float maxval) { glm_vec2_clamp(v, minval, maxval); }
void glmc_vec2_lerp(vec2 from, vec2 to, float t, vec2 dest) { glm_vec2_lerp(from, to, t, dest); }
void glmc_vec2_complex_mul(vec2 a, vec2 b, vec2 dest) { glm_vec2_complex_mul(a, b, dest); }
void glmc_vec2_complex_div(vec2 a, vec2 b, vec2 dest) { glm_vec2_complex_div(a, b, dest); }
void glmc_vec2_complex_conjugate(vec2 a, vec2 dest) { glm_vec2_complex_conjugate(a, dest); }
