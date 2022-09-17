#ifndef __CMATH_TYPES_H__
#define __CMATH_TYPES_H__

#if defined(_MSC_VER)
/* do not use alignment for older visual studio versions */
#    if _MSC_VER < 1913 /*  Visual Studio 2017 version 15.6  */
#        define CGLM_ALL_UNALIGNED
#        define CGLM_ALIGN(X) /* no alignment */
#    else
#        define CGLM_ALIGN(X) __declspec(align(X))
#    endif
#else
#    define CGLM_ALIGN(X) __attribute((aligned(X)))
#endif

#ifndef CGLM_ALL_UNALIGNED
#    define CGLM_ALIGN_IF(X) CGLM_ALIGN(X)
#else
#    define CGLM_ALIGN_IF(X) /* no alignment */
#endif

#ifdef __AVX__
#    define CGLM_ALIGN_MAT CGLM_ALIGN(32)
#else
#    define CGLM_ALIGN_MAT CGLM_ALIGN(16)
#endif

#ifdef __GNUC__
#    define CGLM_ASSUME_ALIGNED(expr, alignment) __builtin_assume_aligned((expr), (alignment))
#else
#    define CGLM_ASSUME_ALIGNED(expr, alignment) (expr)
#endif

#define CGLM_CASTPTR_ASSUME_ALIGNED(expr, type) ((type*)CGLM_ASSUME_ALIGNED((expr), __alignof__(type)))

typedef int ivec2[2];
typedef int ivec3[3];
typedef int ivec4[4];

typedef float vec2[2];
typedef float vec3[3];
typedef CGLM_ALIGN_IF(16) float vec4[4];
typedef vec4 versor; /* |x, y, z, w| -> w is the last */
typedef vec3 mat3[3];
typedef CGLM_ALIGN_IF(16) vec2 mat2[2];
typedef CGLM_ALIGN_MAT vec4 mat4[4];

/*
  Important: cglm stores quaternion as [x, y, z, w] in memory since v0.4.0
  it was [w, x, y, z] before v0.4.0 ( v0.3.5 and earlier ). w is real part.
*/
#if 0
constexpr double GLM_E        = 2.71828182845904523536028747135266250;     // e           
constexpr double GLM_LOG2E    = 1.44269504088896340735992468100189214;     // log2(e)     
constexpr double GLM_LOG10E   = 0.434294481903251827651128918916605082;    // log10(e)    
constexpr double GLM_LN2      = 0.693147180559945309417232121458176568;    // loge(2)     
constexpr double GLM_LN10     = 2.30258509299404568401799145468436421;     // loge(10)    
constexpr double GLM_PI       = 3.14159265358979323846264338327950288;     // pi          
constexpr double GLM_PI_2     = 1.57079632679489661923132169163975144;     // pi/2        
constexpr double GLM_PI_4     = 0.785398163397448309615660845819875721;    // pi/4        
constexpr double GLM_1_PI     = 0.318309886183790671537767526745028724;    // 1/pi        
constexpr double GLM_2_PI     = 0.636619772367581343075535053490057448;    // 2/pi        
constexpr double GLM_2_SQRTPI = 1.12837916709551257389615890312154517;     // 2/sqrt(pi)  
constexpr double GLM_SQRT2    = 1.41421356237309504880168872420969808;     // sqrt(2)     
constexpr double GLM_SQRT1_2  = 0.707106781186547524400844362104849039;    // 1/sqrt(2)   

constexpr float GLM_Ef        = 2.71828182845904523536028747135266250f;     // e           
constexpr float GLM_LOG2Ef    = 1.44269504088896340735992468100189214f;     // log2(e)     
constexpr float GLM_LOG10Ef   = 0.434294481903251827651128918916605082f;    // log10(e)    
constexpr float GLM_LN2f      = 0.693147180559945309417232121458176568f;    // loge(2)     
constexpr float GLM_LN10f     = 2.30258509299404568401799145468436421f;     // loge(10)    
constexpr float GLM_PIf       = 3.14159265358979323846264338327950288f;     // pi          
constexpr float GLM_PI_2f     = 1.57079632679489661923132169163975144f;     // pi/2        
constexpr float GLM_PI_4f     = 0.785398163397448309615660845819875721f;    // pi/4        
constexpr float GLM_1_PIf     = 0.318309886183790671537767526745028724f;    // 1/pi        
constexpr float GLM_2_PIf     = 0.636619772367581343075535053490057448f;    // 2/pi        
constexpr float GLM_2_SQRTPIf = 1.12837916709551257389615890312154517f;     // 2/sqrt(pi)  
constexpr float GLM_SQRT2f    = 1.41421356237309504880168872420969808f;     // sqrt(2)     
constexpr float GLM_SQRT1_2f  = 0.707106781186547524400844362104849039f;    // 1/sqrt(2)   
#else

#define GLM_E         2.71828182845904523536028747135266250   /* e           */
#define GLM_LOG2E     1.44269504088896340735992468100189214   /* log2(e)     */
#define GLM_LOG10E    0.434294481903251827651128918916605082  /* log10(e)    */
#define GLM_LN2       0.693147180559945309417232121458176568  /* loge(2)     */
#define GLM_LN10      2.30258509299404568401799145468436421   /* loge(10)    */
#define GLM_PI        3.14159265358979323846264338327950288   /* pi          */
#define GLM_PI_2      1.57079632679489661923132169163975144   /* pi/2        */
#define GLM_PI_4      0.785398163397448309615660845819875721  /* pi/4        */
#define GLM_1_PI      0.318309886183790671537767526745028724  /* 1/pi        */
#define GLM_2_PI      0.636619772367581343075535053490057448  /* 2/pi        */
#define GLM_2_SQRTPI  1.12837916709551257389615890312154517   /* 2/sqrt(pi)  */
#define GLM_SQRT2     1.41421356237309504880168872420969808   /* sqrt(2)     */
#define GLM_SQRT1_2   0.707106781186547524400844362104849039  /* 1/sqrt(2)   */

#define GLM_Ef        ((float)GLM_E)
#define GLM_LOG2Ef    ((float)GLM_LOG2E)
#define GLM_LOG10Ef   ((float)GLM_LOG10E)
#define GLM_LN2f      ((float)GLM_LN2)
#define GLM_LN10f     ((float)GLM_LN10)
#define GLM_PIf       ((float)GLM_PI)
#define GLM_PI_2f     ((float)GLM_PI_2)
#define GLM_PI_4f     ((float)GLM_PI_4)
#define GLM_1_PIf     ((float)GLM_1_PI)
#define GLM_2_PIf     ((float)GLM_2_PI)
#define GLM_2_SQRTPIf ((float)GLM_2_SQRTPI)
#define GLM_SQRT2f    ((float)GLM_SQRT2)
#define GLM_SQRT1_2f  ((float)GLM_SQRT1_2)

#endif

#endif /* cglm_types_h */
