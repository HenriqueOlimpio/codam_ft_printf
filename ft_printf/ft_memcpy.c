/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 11:00:34 by henolimp      #+#    #+#                 */
/*   Updated: 2023/01/12 13:52:57 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*     The memcpy() function copies n bytes from memory area src to memory area
     dst.  If dst and src overlap, behavior is undefined.  Applications in
     which dst and src might overlap should use memmove(3) instead.
**/
#include "ft_printf.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst1;
	char const	*src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	i = 0;
	if (!dst1 && !src1)
		return (0);
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst1);
}
