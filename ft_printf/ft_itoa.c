/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 14:35:15 by henolimp      #+#    #+#                 */
/*   Updated: 2023/01/12 13:43:50 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.**/
#include "ft_printf.h"

int	ft_count(int nbr)
{
	int	count;

	if (nbr == 0)
		return (1);
	count = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		count++;
	}
	while (nbr > 0)
	{
		count++;
		nbr = nbr / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		nbr;
	int		count;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_count(n);
	nbr = n;
	str = malloc((count + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
		nbr = nbr * -1;
	str[count] = '\0';
	while (count > 0)
	{
		str[count -1] = (nbr % 10) + 48;
		nbr = nbr / 10;
		count--;
	}
	if (n < 0)
		str[count] = '-';
	return (str);
}
