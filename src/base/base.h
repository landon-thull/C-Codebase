#ifndef BASE_H
#define BASE_H

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

#endif
