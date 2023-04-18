#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define CONCAT_ARRAY(TYPE, A, An, B, Bn) \
  (TYPE *)test((const void *)(A), (An), (const void *)(B), (Bn), sizeof(TYPE));

void *test(const void *a, size_t an,
                   const void *b, size_t bn, size_t s)
{
  char *p = malloc(s * (an + bn));
  memcpy(p, a, an*s);
  memcpy(p + an*s, b, bn*s);
  return p;
}

const int x[] = { 10, 20, 30, 40, 50, 60 };
const int y[] = { 70, 80, 90, 100, 110, 120 };
   
int main(void)
{
  unsigned int i;

  int *z = CONCAT_ARRAY(int, x, 6, y, 6);
  printf("Original arrays:\n");
  printf("Array-1:\n");
  for(int i = 0; i < 6; i++)
    printf("%d ", x[i]);
  printf("\nArray-2:\n");
  for(i = 0; i < 6; i++)
    printf("%d ", y[i]); 
  printf("\nConcatenate above arrays:\n");
  for(i = 0; i < 12; i++)
    printf("%d ", z[i]);
  free(z);
  return 0;
}
