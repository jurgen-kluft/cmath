#ifndef __CMATH_IO_H__
#define __CMATH_IO_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "cmath/cglm.h"


void
glmc_mat4_print(mat4   matrix,
                FILE * __restrict ostream);


void
glmc_mat3_print(mat3 matrix,
                FILE * __restrict ostream);


void
glmc_vec4_print(vec4 vec,
                FILE * __restrict ostream);


void
glmc_vec3_print(vec3 vec,
                FILE * __restrict ostream);


void
glmc_versor_print(versor vec,
                  FILE * __restrict ostream);

#ifdef __cplusplus
}
#endif
#endif /* cglmc_io_h */
