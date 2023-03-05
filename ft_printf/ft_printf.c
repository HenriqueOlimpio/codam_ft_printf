/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/21 09:05:33 by henolimp      #+#    #+#                 */
/*   Updated: 2023/01/12 15:17:31 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_args(const char *f, int i, va_list ap)
{
	if (f[i + 1] == '%')
		return (ft_putchar(f[i + 1]));
	else if (f[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (f[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (f[i + 1] == 'd' || f[i + 1] == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (f[i + 1] == 'u')
		return (ft_putnbr_u(va_arg(ap, unsigned int)));
	else if (f[i + 1] == 'x')
		return (ft_hex(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (f[i + 1] == 'X')
		return (ft_hex(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else if (f[i + 1] == 'p')
		return (ft_pointer(va_arg(ap, void *)));
	else
		return (0);
}

int	reduce(int ret, const char *format, va_list ap, int i)
{
	int	length;

	length = 0;
	while (format[i])
	{	
		if (format[i] == '%' && format[i + 1] == '\0')
			return (length);
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			ret = ft_args(format, i, ap);
			if (ret == -1)
				return (-1);
			i++;
		}
		else if (format[i] != '%')
		{
			ret = ft_putchar(format[i]);
			if (ret == -1)
				return (-1);
		}
		length += ret;
		i++;
	}
	return (length);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		ret;
	int		result;

	ret = 0;
	va_start (ap, format);
	result = reduce(ret, format, ap, 0);
	va_end(ap);
	return (result);
}
