#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
  unsigned char *tmp;
  unsigned int i;

  tmp = (unsigned char *)malloc(sizeof(*tmp) * len);
  if (!tmp)
    return (NULL);
  i = 0;
  ft_memcpy(tmp, src, len);
  ft_memcpy(dst, tmp, len);
  free (tmp);
  return (dst);
}
