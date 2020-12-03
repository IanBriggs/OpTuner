#ifndef ASSERTS_H
#define ASSERTS_H

#include <assert.h>




/* from http://www.pixelbeat.org/programming/gcc/static_assert.html */
#define ASSERT_CONCAT_(a, b) a##b
#define ASSERT_CONCAT(a, b) ASSERT_CONCAT_(a, b)
/* These can't be used after statements in c89. */
#ifdef __COUNTER__
#define STATIC_ASSERT(e,m)						\
  enum { ASSERT_CONCAT(static_assert_, __COUNTER__) = 1/(int)(!!(e)) }
#else
/* This can't be used twice on the same line so ensure if using in headers
 * that the headers are not included twice (by wrapping in #ifndef...#endif)
 * Note it doesn't cause an issue when used on same line of separate modules
 * compiled with gcc -combine -fwhole-program.  */
#define STATIC_ASSERT(e,m)						\
  enum { ASSERT_CONCAT(assert_line_, __LINE__) = 1/(int)(!!(e)) }
#endif




#define in_range(low, x, high) (((low) <= (x)) && ((x) <= (high)))


/* postconditions are off by default */
#ifdef POSTCONDITIONS
#define postcondition(x) assert(x)
#else
#define postcondition(x)
#endif


/* preconditions are on by default */
#ifdef NO_PRECONDITIONS
#define precondition(x)
#else
#define precondition(x) assert(x)
#endif


/* extra_asserts are off by default */
#ifdef EXTRA_ASSERTS
#define extra_assert(x) assert(x)
#else
#define extra_assert(x)
#endif


#define UNUSED(x) (void)(x)

#define UNIMPLEMENTED() assert(0)

#define assert_zero(x) assert((x) == 0); UNUSED(x);

#endif
