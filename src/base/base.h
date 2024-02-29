#ifndef BASE_H
#define BASE_H

/////////////////////////////
// CONTEXT CRACKING

// COMPILER DETECTION
#if defined(_MSC_VER)
# define COMPILER_CL 1
#elif defined(__GNUC__)
# define COMPILER_GCC 1
#elif defined(__clang__)
# define COMPILER_CLANG 1
#else
# error "Unable to detect compiler"
#endif

#if !defined(COMPILER_CL)
# define COMPILER_CL 0
#endif
#if !defined(COMPILER_CLANG)
# define COMPILER_CLANG 0
#endif
#if !defined(COMPILER_GCC)
# define COMPILER_GCC 0
#endif

// OS DETECTION
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
# define OS_WINDOWS 1
#elif defined(__gnu_linux__) || defined(__linux__)
# define OS_LINUX 1
#elif defined(__APPLE__) && defined (__MACH__)
# define OS_MAC 1
#else
# error "Unable to detect operating system"
#endif

#if !defined(OS_WINDOWS)
# define OS_WINDOWS 0
#endif
#if !defined(OS_LINUX)
# define OS_LINUX 0
#endif
#if !defined(OS_MAC)
# define OS_MAC 0
#endif

/////////////////////////////
// HELPER MACROS

#define ArrayCount(a) (sizeof(a)/sizeof(*(a))) /* returns the number of elements in the array 'a' */

#define Min(a,b) (((a)<(b))?(a):(b)) /* returns the smaller of two values */
#define Max(a,b) (((a)>(b))?(a):(b)) /* returns the larger of two values */

#define c_linkage_begin extern "C"{
#define c_linkage_end }
#define c_linkage extern "C"


/////////////////////////////
// BASIC TYPES
#include <stdint.h>

typedef int8_t    s8;  /* 8 bit signed integer */
typedef int16_t   s16; /* 16 bit signed integer */
typedef int32_t   s32; /* 32 bit signed integer */
typedef int64_t   s64; /* 64 bit signed integer */
typedef u_int8_t  u8;  /* 8 bit unsigned integer */
typedef u_int16_t u16; /* 16 bit unsigned integer */
typedef u_int32_t u32; /* 32 bit unsigned integer */
typedef u_int64_t u64; /* 64 bit unsigned integer */
typedef float     f32; /* 32 bit floating point number */
typedef double    f64; /* 64 bit floating point number */

#endif
