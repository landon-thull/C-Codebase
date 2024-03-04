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

#define global static
#define local static
#define function static

/////////////////////////////
// BASIC TYPES
#include <stdint.h>

typedef int8_t    s8;  /* 8-bit signed integer */
typedef int16_t   s16; /* 16-bit signed integer */
typedef int32_t   s32; /* 32-bit signed integer */
typedef int64_t   s64; /* 64-bit signed integer */
typedef u_int8_t  u8;  /* 8-bit unsigned integer */
typedef u_int16_t u16; /* 16-bit unsigned integer */
typedef u_int32_t u32; /* 32-bit unsigned integer */
typedef u_int64_t u64; /* 64-bit unsigned integer */
typedef float     f32; /* 32-bit floating point number */
typedef double    f64; /* 64-bit floating point number */

/////////////////////////////
// BASIC CONSTANTS

global s8  s8_min  = (s8)0xff80; /* minimum 8-bit signed integer value */
global s16 s16_min = (s16)0x8000; /* minimum 16-bit signed integer value */
global s32 s32_min = (s32)0x80000000; /* minimum 32-bit signed integer value */
global s64 s64_min = (s64)0x8000000000000000; /* minimum 64-bit signed integer value */
global s8  s8_max  = (s8)0x7f; /* maximum 8-bit signed integer value */
global s16 s16_max = (s16)0x7fff; /* maximum 16-bit signed integer value */
global s32 s32_max = (s32)0x7fffffff; /* maximum 32-bit signed integer value */
global s64 s64_max = (s64)0x7fffffffffffffff; /* maximum 64-bit signed integer value */

global u8  u8_max  = (u8)0xff; /* maximum 8-bit unsigned integer value */
global u16 u16_max = (u16)0xffff; /* maximum 16-bit unsigned integer value */
global u32 u32_max = (u32)0xffffffff; /* maximum 32-bit unsigned integer value */
global u64 u64_max = (u64)0xffffffffffffffff; /* maximum 64-bit unsigned integer value */

/////////////////////////////
// SYMBOLIC CONSTANTS

typedef enum {
  Axis_X,
  Axis_Y,
  Axis_Z,
  Axis_W
} Axis;

typedef enum {
  Side_Min,
  Side_Max
} Side;

typedef enum {
  Month_Jan,
  Month_Feb,
  Month_Mar,
  Month_Apr,
  Month_May,
  Month_Jun,
  Month_Jul,
  Month_Aug,
  Month_Sep,
  Month_Oct,
  Month_Nov,
  Month_Dec
} Month;

typedef enum {
  DayOfWeek_Sunday,
  DayOfWeek_Monday,
  DayOfWeek_Tuesday,
  DayOfWeek_Wednesday,
  DayOfWeek_Thursday,
  DayOfWeek_Friday,
  DayOfWeek_Saturday
} DayOfWeek;

typedef enum {
  OperatingSystem_Null,
  OperatingSystem_Windows,
  OperatingSystem_Linux,
  OperatingSystem_Mac,
  OperatingSystem_COUNT
} OperatingSystem;

typedef enum {
  Architecture_Null,
  Architecture_X64,
  Architecture_X86,
  Architecture_ARM,
  Architecture_ARM64,
  Architecture_COUNT
} Architecture;

/////////////////////////////
// SYMBOLIC CONSTANT FUNCTIONS

OperatingSystem operating_system_from_context(void);

char* string_from_operating_system(OperatingSystem os);
char* string_from_month(Month month);
char* string_from_day_of_week(DayOfWeek day_of_week);

#endif
