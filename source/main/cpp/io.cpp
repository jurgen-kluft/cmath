#define CGLM_LIB_SRC

#include "cmath/cglm.h"
#include "cmath/call.h"

void glmc_mat4_print(mat4 matrix, FILE* __restrict ostream) { glm_mat4_print(matrix, ostream); }
void glmc_mat3_print(mat3 matrix, FILE* __restrict ostream) { glm_mat3_print(matrix, ostream); }
void glmc_vec4_print(vec4 vec, FILE* __restrict ostream) { glm_vec4_print(vec, ostream); }
void glmc_vec3_print(vec3 vec, FILE* __restrict ostream) { glm_vec3_print(vec, ostream); }
void glmc_versor_print(versor vec, FILE* __restrict ostream) { glm_versor_print(vec, ostream); }
