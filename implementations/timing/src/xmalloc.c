

#include "xmalloc.h"

#include "utils.h"

#include <stdio.h>
#include <stdlib.h>




void*
xmalloc(size_t len)
{
  void* retval = malloc(len);

  if (retval == NULL) {
    fprintf(stderr, "Unable to malloc memory\n");
    exit(2);
  }

  return retval;
}


void*
xrealloc(void* ptr, size_t new_size)
{
  assert(ptr != NULL);

  void* retval = realloc(ptr, new_size);

  if (retval == NULL) {
    fprintf(stderr, "Unable to realloc memory\n");
    exit(2);
  }

  return retval;
}


void
xfree(void* ptr)
{
  assert(ptr != NULL);
  free(ptr);
}
