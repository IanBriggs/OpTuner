

#include "asserts.h"
#include "xmalloc.h"

#include <stdio.h>




void* xmalloc(size_t len)
{
  void* retval = malloc(len);

  if (retval == NULL) {
    fprintf(stderr, "Unable to malloc memory\n");
    exit(2);
  }

  return retval;
}

void* xrealloc(void* ptr, size_t new_size)
{
  precondition(ptr != NULL);

  void* retval = realloc(ptr, new_size);

  if (retval == NULL) {
    fprintf(stderr, "Unable to realloc memory\n");
    exit(2);
  }

  return retval;
}
