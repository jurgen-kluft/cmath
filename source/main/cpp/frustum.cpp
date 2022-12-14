#include "cmath/cglm.h"
#include "cmath/call.h"

void glmc_frustum_planes(mat4 m, vec4 dest[6]) { glm_frustum_planes(m, dest); }
void glmc_frustum_corners(mat4 invMat, vec4 dest[8]) { glm_frustum_corners(invMat, dest); }
void glmc_frustum_center(vec4 corners[8], vec4 dest) { glm_frustum_center(corners, dest); }
void glmc_frustum_box(vec4 corners[8], mat4 m, vec3 box[2]) { glm_frustum_box(corners, m, box); }
void glmc_frustum_corners_at(vec4 corners[8], float splitDist, float farDist, vec4 planeCorners[4]) { glm_frustum_corners_at(corners, splitDist, farDist, planeCorners); }
