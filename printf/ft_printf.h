/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 02:43:35 by oait-si-          #+#    #+#             */
/*   Updated: 2024/11/28 07:59:34 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_print_arg(va_list args, const char *format, int *count, int *i);
int		ft_printf(const char *format, ...);
void	ft_putchar(int c, int *count);
void	ft_puthex(size_t n, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putstr(const char *str, int *count);
void	ft_putuphex(size_t n, int *count);
void	ft_putpointer(void *p, int *count);
void	ft_putunbr(unsigned int n, int *count);
size_t	ft_strlen(const char *s);

#endif