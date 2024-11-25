/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:45:24 by oait-si-          #+#    #+#             */
/*   Updated: 2024/11/25 08:00:43 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_arg(va_list args, const char *format, int *count, int i)
{
	if (format[i] == '%')
		ft_putchar('%', count);
	else if (format[i] == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (format[i] == 's')
	{
		char *str = va_arg(args, char *);
		if (!str)
			ft_putstr("(null)", count);
		else
			ft_putstr(str, count);
	}
	else if (format[i] == 'd' || format[i] == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (format[i] == 'u')
		ft_putunbr(va_arg(args, unsigned int), count);
	else if (format[i] == 'x')
		ft_puthex(va_arg(args, unsigned int), count);
	else if (format[i] == 'X')
		ft_putuphex(va_arg(args, unsigned int), count);
	else if (format[i] == 'p')
		ft_putpointer(va_arg(args, void *), count);
	else
		ft_putchar(format[i], count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] != '%')
			ft_putchar(format[i++], &count);
		else
		{
			i++;
			ft_print_arg(args, format, &count, i);
			i++;
		}
	}
	va_end(args);
	return (count);
}
