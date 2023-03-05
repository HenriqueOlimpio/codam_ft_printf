/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_hex.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/21 09:04:29 by henolimp      #+#    #+#                 */
/*   Updated: 2023/01/12 13:44:56 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int nbr, char *base)
{
	char	*str;
	int		len;

	str = hex_str(nbr, base);
	if (str == NULL)
		return (-1);
	len = ft_putstr(str);
	if (len == -1)
	{
		free(str);
		return (-1);
	}
	free(str);
	return (len);
}
