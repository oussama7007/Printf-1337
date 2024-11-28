/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 02:50:30 by oait-si-          #+#    #+#             */
/*   Updated: 2024/11/26 08:13:17 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuphex(size_t n, int *count)
{
	if (n >= 16)
	{
		ft_putuphex(n / 16, count);
		ft_putuphex(n % 16, count);
	}
	else if (n < 10)
		ft_putchar(n + 48, count);
	else
		ft_putchar(n + 55, count);
}
