#include "libft.h"

int   main()
{
  char buffer[] = "coucou c'est moi!";
  char buffer1[] = "Hello";
  char buffer2[] = " World!";
  char buffer3[] = "Invasion";
  char buffer4[] = "etienne";

  ft_putchar('a');
  ft_putchar('\n');
  ft_putstr("coucou");
  ft_putchar('\n');
  ft_putnbr(3);
  ft_putchar('\n');
  ft_putnbr(ft_atoi("-42"));
  ft_putchar('\n');
  ft_putstr((char *)ft_memset(buffer, 97, 6));
  ft_putchar('\n');
  ft_putstr((char *)ft_memcpy(buffer, "helloo", 6));
  ft_putchar('\n');
  ft_putstr((char *)ft_memccpy(buffer, "hehehe", 101, 6));
  ft_putchar('\n');
  ft_putstr((char *)ft_memmove(buffer, "coucou c'est encore moi!", 23));
  ft_putchar('\n');
  ft_putstr((char *)ft_memchr(buffer, 101, 15));
  ft_putchar('\n');
  ft_putnbr(ft_memcmp("est encore moa", "est encore moi", 14));
  ft_putchar('\n');
  ft_putnbr(ft_strlen("Hello"));
  ft_putchar('\n');
  ft_putstr(ft_strdup("Hello les amis!"));
  ft_putchar('\n');
  ft_putstr(ft_strcat(buffer1, buffer2));
  ft_putchar('\n');
  ft_putstr(ft_strncat(buffer2, buffer3, 3));
  ft_putchar('\n');
  ft_putstr(ft_strchr(buffer3, 97));
  ft_putchar('\n');
  ft_putstr(ft_strrchr(buffer4, 110));
  ft_putchar('\n');
  ft_putstr(ft_strstr("Les Etienne sont grand!", "sont"));
  ft_putchar('\n');
  ft_putstr(ft_strnstr("Les Etienne sont grand!", "en", 15));
  ft_putchar('\n');
  ft_putnbr(ft_strcmp("bonjour", "bonjours"));
  ft_putchar('\n');
  ft_putnbr(ft_strncmp("bonjour", "bonjours", 5));
  ft_putchar('\n');
  ft_putnbr(ft_isalpha(69));
  ft_putchar('\n');
  ft_putnbr(ft_isdigit(48));
  ft_putchar('\n');
  ft_putnbr(ft_isalnum(79));
  ft_putchar('\n');
  ft_putnbr(ft_isascii(126));
  ft_putchar('\n');
  ft_putchar(ft_toupper(97));
  ft_putchar('\n');
  ft_putchar(ft_tolower(69));
  ft_putchar('\n');
  return (0);
}
