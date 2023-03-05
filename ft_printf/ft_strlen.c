/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 13:24:50 by henolimp      #+#    #+#                 */
/*   Updated: 2023/01/12 13:51:52 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*     The strlen() function computes the length of the string s.  The strnlen()
     function attempts to compute the length of s, but never scans beyond the
     first maxlen bytes of s.*/
#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
