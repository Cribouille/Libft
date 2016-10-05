#include "./includes/libft.h"

char *ft_strtrim(char const *s)
{
  unsigned int i;
  unsigned int len;
  unsigned int j;

  i = 0;
  j = ft_strlen(s) - 1;
  if (!s)
    return (NULL);
  while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s)
    i++;
  if (!s[i])
    return (NULL);
  while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
    j--;
  if (!i || j == ft_strlen(s) - 1)
    return (ft_strdup(s));
  len = j - i;
  return (ft_strsub(s, i, len + 1));
}
