#ifndef cglm__config__h_
#define cglm__config__h_

#if defined(_WIN32) || defined(WIN32)

/* Exclude rarely-used stuff from Windows headers */
#    define WIN32_LEAN_AND_MEAN
#    include <SDKDDKVer.h>

/* Windows Header Files: */
#    include <windows.h>

#endif

#endif /* cglm__config__h_ */
