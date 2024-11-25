/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 00:10:36 by oait-si-          #+#    #+#             */
/*   Updated: 2024/11/25 02:47:53 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, int *count)
{
	int	i;

	if (!str)
		*count += write(1, "(null)", 6);
	else
	{
		i = 0;
		while (str[i])
			ft_putchar(str[i++], count);
	}
}