/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_pointer.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/21 09:05:00 by henolimp      #+#    #+#                 */
/*   Updated: 2022/12/22 21:06:38 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count(unsigned long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

char	*hex_str(unsigned long n, char *base)
{
	int		size;
	char	*hex;

	size = count(n);
	hex = (char *)malloc(sizeof(char) * (size + 1));
	if (hex == NULL)
		return (NULL);
	hex[size] = '\0';
	while (size > 0)
	{
		hex[size - 1] = base[n % 16];
		n = n / 16;
		size--;
	}
	return (hex);
}

int	ft_pointer(void *nbr)
{
	int				len;
	char			*str;
	unsigned long	n;

	len = 0;
	n = (unsigned long)nbr;
	str = hex_str(n, "0123456789abcdef");
	if (str == NULL)
		return (-1);
	len = len + ft_putstr("0x");
	if (len == -1)
	{
		free(str);
		return (-1);
	}
	len = len + ft_putstr(str);
	if (len == -1)
	{
		free(str);
		return (-1);
	}
	free(str);
	return (len);
}
