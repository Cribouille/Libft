#include "libft.h"

int   main()
{
  char buffer[] = "coucou c'est encore moi!";

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
  ft_putstr((char *)ft_memccpy(buffer, "helloo", 101, 6));
  ft_putchar('\n');
  return (0);
}
