#ifndef XMALLOC_H
#define XMALLOC_H

#include <stdlib.h>
#include <stddef.h>




void* xmalloc(size_t len);

void* xrealloc(void* ptr, size_t new_size);




#endif
