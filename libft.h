#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void 	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);

#endif
