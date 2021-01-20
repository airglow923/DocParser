#ifndef HYUNDEOK_MACRO_H
#define HYUNDEOK_MACRO_H

#include <stdio.h> // fprintf

#undef HYUNDEOK_STRINGIFY_IMPL
#define HYUNDEOK_STRINGIFY_IMPL(x) #x

#undef HYUNDEOK_STRINGIFY
#define HYUNDEOK_STRINGIFY(x) HYUNDEOK_STRINGIFY_IMPL(x)

#undef HYUNDEOK_FILE_LINE
#define HYUNDEOK_FILE_LINE __FILE__ ":" HYUNDEOK_STRINGIFY(__LINE__)

#undef HYUNDEOK_LOG
#define HYUNDEOK_LOG(format, ...)                                              \
  "%s:%s " format "\n", __func__, HYUNDEOK_FILE_LINE, ##__VA_ARGS__

#undef HYUNDEOK_PRTN_ERR
#define HYUNDEOK_PRTN_ERR(format, ...) fprintf(stderr, format, ##__VA_ARGS__)

#undef HYUNDEOK_NUMERIC_ASSERT
#define HYUNDEOK_NUMERIC_ASSERT(value, target)                                 \
  do {                                                                         \
    if ((value) != (target)) {                                                 \
      HYUNDEOK_PRTN_ERR(HYUNDEOK_LOG(HYUNDEOK_STRINGIFY(                       \
          value) " is not equal to " HYUNDEOK_STRINGIFY(target)));             \
      return -1;                                                               \
    }                                                                          \
  } while (0)

#endif
