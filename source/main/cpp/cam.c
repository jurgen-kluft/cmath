#include "cmath/cglm.h"
#include "cmath/call.h"


void
glmc_frustum(float left,   float right,
             float bottom, float top,
             float nearZ,  float farZ,
             mat4 dest) {
  glm_frustum(left, right, bottom, top, nearZ, farZ, dest);
}


void
glmc_ortho(float left,   float right,
           float bottom, float top,
           float nearZ,  float farZ,
           mat4  dest) {
  glm_ortho(left, right, bottom, top, nearZ, farZ, dest);
}


void
glmc_ortho_aabb(vec3 box[2], mat4 dest) {
  glm_ortho_aabb(box, dest);
}


void
glmc_ortho_aabb_p(vec3 box[2], float padding, mat4 dest) {
  glm_ortho_aabb_p(box, padding, dest);
}


void
glmc_ortho_aabb_pz(vec3 box[2], float padding, mat4 dest) {
  glm_ortho_aabb_pz(box, padding, dest);
}


void
glmc_ortho_default(float aspect, mat4 dest) {
  glm_ortho_default(aspect, dest);
}


void
glmc_ortho_default_s(float aspect, float size, mat4 dest) {
  glm_ortho_default_s(aspect, size, dest);
}


void
glmc_perspective(float fovy, float aspect, float nearZ, float farZ, mat4 dest) {
  glm_perspective(fovy, aspect, nearZ, farZ, dest);
}


void
glmc_persp_move_far(mat4 proj, float deltaFar) {
  glm_persp_move_far(proj, deltaFar);
}


void
glmc_perspective_default(float aspect, mat4 dest) {
  glm_perspective_default(aspect, dest);
}


void
glmc_perspective_resize(float aspect, mat4 proj) {
  glm_perspective_resize(aspect, proj);
}


void
glmc_lookat(vec3 eye, vec3 center, vec3 up, mat4 dest) {
  glm_lookat(eye, center, up, dest);
}


void
glmc_look(vec3 eye, vec3 dir, vec3 up, mat4 dest) {
  glm_look(eye, dir, up, dest);
}


void
glmc_look_anyup(vec3 eye, vec3 dir, mat4 dest) {
  glm_look_anyup(eye, dir, dest);
}


void
glmc_persp_decomp(mat4 proj,
                  float * __restrict nearZ,
                  float * __restrict farZ,
                  float * __restrict top,
                  float * __restrict bottom,
                  float * __restrict left,
                  float * __restrict right) {
  glm_persp_decomp(proj, nearZ, farZ, top, bottom, left, right);
}


void
glmc_persp_decompv(mat4 proj, float dest[6]) {
  glm_persp_decompv(proj, dest);
}


void
glmc_persp_decomp_x(mat4 proj,
                    float * __restrict left,
                    float * __restrict right) {
  glm_persp_decomp_x(proj, left, right);
}


void
glmc_persp_decomp_y(mat4 proj,
                    float * __restrict top,
                    float * __restrict bottom) {
  glm_persp_decomp_y(proj, top, bottom);
}


void
glmc_persp_decomp_z(mat4 proj,
                    float * __restrict nearZ,
                    float * __restrict farZ) {
  glm_persp_decomp_z(proj, nearZ, farZ);
}


void
glmc_persp_decomp_far(mat4 proj, float * __restrict farZ) {
  glm_persp_decomp_far(proj, farZ);
}


void
glmc_persp_decomp_near(mat4 proj, float * __restrict nearZ) {
  glm_persp_decomp_near(proj, nearZ);
}


float
glmc_persp_fovy(mat4 proj) {
  return glm_persp_fovy(proj);
}


float
glmc_persp_aspect(mat4 proj) {
  return glm_persp_aspect(proj);
}


void
glmc_persp_sizes(mat4 proj, float fovy, vec4 dest) {
  glm_persp_sizes(proj, fovy, dest);
}
