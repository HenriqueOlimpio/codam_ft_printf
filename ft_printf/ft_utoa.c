/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_utoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/21 09:14:07 by henolimp      #+#    #+#                 */
/*   Updated: 2023/01/12 13:44:46 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_nbr(unsigned int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

char	*ft_utoa(unsigned int n)
{
	int				i;
	unsigned int	aux;
	char			*ptr;

	i = len_nbr(n);
	aux = n;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	if (aux == 0)
		ptr[0] = '0';
	ptr[i--] = '\0';
	while (aux)
	{
		ptr[i--] = (aux % 10) + '0';
		aux = aux / 10;
	}
	return (ptr);
}
