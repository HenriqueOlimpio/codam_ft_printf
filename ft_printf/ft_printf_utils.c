/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/21 09:05:21 by henolimp      #+#    #+#                 */
/*   Updated: 2023/01/12 09:53:14 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	else
		return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		else
			return (6);
	}
	while (str[i])
		i++;
	if (write(1, str, i) == -1)
		return (-1);
	return (i);
}

int	ft_putnbr(int nbr)
{
	char	*str;
	int		len;

	str = ft_itoa(nbr);
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

int	ft_putnbr_u(unsigned int nbr)
{
	char	*str;
	int		len;

	str = ft_utoa(nbr);
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
