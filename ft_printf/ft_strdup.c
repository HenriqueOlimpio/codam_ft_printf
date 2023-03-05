/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 15:11:28 by henolimp      #+#    #+#                 */
/*   Updated: 2023/01/12 13:50:29 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/* The strdup() function allocates sufficient memory for a copy of the
     string s1, does the copy, and returns a pointer to it.  The pointer may
     subsequently be used as an argument to the function free(3).*/
#include "ft_printf.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*new;

	len = ft_strlen(s1) + 1;
	new = malloc(len);
	if (new == NULL)
		return (NULL);
	return ((char *)ft_memcpy(new, s1, len));
}
