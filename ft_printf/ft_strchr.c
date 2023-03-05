/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 16:17:27 by henolimp      #+#    #+#                 */
/*   Updated: 2023/01/12 13:45:00 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}
