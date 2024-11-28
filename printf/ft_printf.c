/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:45:24 by oait-si-          #+#    #+#             */
/*   Updated: 2024/11/28 07:58:16 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_number(va_list args, char format, int *count)
{
	if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (format == 'u')
		ft_putunbr(va_arg(args, unsigned int), count);
	else if (format == 'x')
		ft_puthex(va_arg(args, unsigned int), count);
	else if (format == 'X')
		ft_putuphex(va_arg(args, unsigned int), count);
}

void	ft_print_arg(va_list args, const char *format, int *count, int *i)
{
	if (format[*i] == '%')
		ft_putchar('%', count);
	else if (format[*i] == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (format[*i] == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (format[*i] == 'd' || format[*i] == 'i' || format[*i] == 'u'
		|| format[*i] == 'x' || format[*i] == 'X')
		ft_print_number(args, format[*i], count);
	else if (format[*i] == 'p')
		ft_putpointer(va_arg(args, void *), count);
	else
	{
		ft_putchar('%', count);
		ft_putchar(format[*i], count);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (write(1, 0, 0) < 0)
		return (-1);
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i], &count);
			i++;
		}
		else
		{
			i++;
			ft_print_arg(args, format, &count, &i);
			i++;
		}
	}
	va_end(args);
	return (count);
}
