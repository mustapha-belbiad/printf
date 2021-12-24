/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsdc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <mbelbiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:54:18 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/12/15 14:52:33 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_unsdc(unsigned int num)
{
	int	i;

	i = 0;
	if (num >= 10)
	{
		i += ft_unsdc(num / 10);
		num = num % 10;
	}
	if (num < 10)
		i += ft_putchar(num + 48);
	return (i);
}
