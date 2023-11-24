#include <stddef.h>

int dominator(const int *array, size_t n) {
  size_t count=0;
  for(size_t j=0; j<n/2+1; j++)
  {
    for(size_t i=0; i<n; i++)
    {
      if(array[j]==array[i])
      {
        count++;
        if(count>n/2)
          {
            return array[j];
          }
      }
    }
    count=0;
  }
  return -1;
}
