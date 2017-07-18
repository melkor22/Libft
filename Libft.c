#include <stdlib.h>

void *ft_memset(void *s,int c,size_t n)
{
  char *ps = s;
  size_t compteur = 0;
  while(compteur != n)
  {
    ps[compteur] = (char)c;
    compteur++;
  }
  return s;
}
