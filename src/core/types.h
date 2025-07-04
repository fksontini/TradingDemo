/* User comment */


#pragma once

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>


typedef uint8_t		    u8;
typedef uint16_t	    u16;
typedef uint32_t    	u32;
typedef uint64_t	    u64;
typedef int8_t	    	i8;
typedef int16_t 		i16;
typedef int32_t		    i32;
typedef int64_t	    	i64;
typedef float   		f32;
typedef double		    f64;
typedef size_t		    sz;
typedef bool		    b8;
typedef char		    c8;


#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
#define PLATFORM_WINDOWS 1
#elif defined(__linux__) || defined(__gnu_linux__)

#define PLATFORM_LINUX 1
#if defined(__ANDROID__)
#define PLATFORM_ANDROID 1
#endif
#elif defined(__unix__)

#define PLATFORM_UNIX 1
#elif defined(_POSIX_VERSION)

#define PLATFORM_POSIX 1
#elif __APPLE__

#define PLATFORM_APPLE 1
#include <TargetConditionals.h>
#if TARGET_IPHONE_SIMULATOR

#define PLATFORM_IOS 1
#define PLATFORM_IOS_SIMULATOR 1
#elif TARGET_OS_IPHONE
#define PLATFORM_IOS 1

#elif TARGET_OS_MAC

#else
#error "Unknown Apple platform"
#endif
#else
#error "Unknown platform"
#endif
