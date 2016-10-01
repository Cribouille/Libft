#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void  ft_putchar(char c);
void  ft_putstr(char *str);
void  ft_putnbr(int nb);
int   ft_atoi(char *str);
void  *ft_memset(void *b, int c, size_t len);
void  ft_bzero(void *s, size_t n);
void  *ft_memcpy(void *dst, const void *src, size_t n);
void  *ft_memccpy(void *dest, const void *src, int c, size_t n);

#endif
