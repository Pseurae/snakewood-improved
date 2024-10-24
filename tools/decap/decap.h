#ifndef DECAP_H
#define DECAP_H

#include <stdio.h>
#include <stddef.h>

#ifdef _MSC_VER

#define FATAL_ERROR(format, ...)               \
do                                             \
{                                              \
    fprintf(stderr, format, __VA_ARGS__);      \
    exit(1);                                   \
} while (0)

#else

#define FATAL_ERROR(format, ...)                 \
do                                               \
{                                                \
    fprintf(stderr, format, ##__VA_ARGS__);      \
    exit(1);                                     \
} while (0)

#endif // _MSC_VER

#endif
