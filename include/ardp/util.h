#ifndef __ARDP_UTIL_H__
#define __ARDP_UTIL_H__

#define is   ==
#define isnt !=

#ifndef _ISO646_H_
  #define or  ||
  #define and &&
  #define not !
#endif /* not _ISO646_H_ */

#define ARDP_SUCCESS true
#define ARDP_FAILURE false

typedef void* var;

/* Supported colors */

#define CLR_NORMAL   "\x1B[0m"
#define CLR_RED      "\x1B[31m"
#define CLR_GREEN    "\x1B[32m"
#define CLR_YELLOW   "\x1B[33m"
#define CLR_BLUE     "\x1B[34m"
#define CLR_MAGENTA  "\x1B[35m"
#define CLR_CYAN     "\x1B[36m"
#define CLR_WHITE    "\x1B[37m"
#define CLR_RESET    "\033[0m"

/* Brach prediction optimalizations */

#define likely(x)       __builtin_expect(!!(x), 1)
#define unlikely(x)     __builtin_expect(!!(x), 0)


static const int nullptr = 0;

#endif /* __ARDP_UTIL_H__ */
