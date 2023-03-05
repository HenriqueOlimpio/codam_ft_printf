/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: henolimp <henolimp@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/21 09:08:08 by henolimp      #+#    #+#                 */
/*   Updated: 2023/01/12 14:03:13 by henolimp      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putnbr(int nbr);
int		ft_putstr(char *str);
int		ft_pointer(void *nbr);
int		ft_hex(unsigned int nbr, char *base);
int		ft_printf(const char *format, ...);
int		ft_putnbr_u(unsigned int nbr);
char	*hex_str(unsigned long n, char *base);
int		count(unsigned long n);
char	*ft_utoa(unsigned int n);
char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);

#endif
