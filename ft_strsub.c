#include "./includes/libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
  char *ret;
  unsigned int i;

  i = 0;
  if (!s || !len)
    return (NULL);
  ret = (char *)malloc(sizeof(*ret) * len + 1);
  if (!ret)
    return (NULL);
  ft_strncpy(ret, s + start, len);
  ret[start + len] = '\0';
  return (ret);
}
