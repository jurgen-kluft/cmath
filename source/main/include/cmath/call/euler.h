#ifndef __CMATH_CALL__EULER_H__
#define __CMATH_CALL__EULER_H__

#include "cmath/cglm.h"

    void glmc_euler_angles(mat4 m, vec3 dest);
    void glmc_euler(vec3 angles, mat4 dest);
    void glmc_euler_xyz(vec3 angles, mat4 dest);
    void glmc_euler_zyx(vec3 angles, mat4 dest);
    void glmc_euler_zxy(vec3 angles, mat4 dest);
    void glmc_euler_xzy(vec3 angles, mat4 dest);
    void glmc_euler_yzx(vec3 angles, mat4 dest);
    void glmc_euler_yxz(vec3 angles, mat4 dest);
    void glmc_euler_by_order(vec3 angles, glm_euler_seq axis, mat4 dest);


#endif /* cglmc_euler_h */
