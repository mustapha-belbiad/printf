/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <mbelbiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:36:23 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/12/15 14:56:40 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libftprintf.h"

int	ft_putnbr(int nb)
{
	unsigned int	num;
	int				i;

	i = 0;
	num = nb;
	if (nb < 0)
	{
		i += ft_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		i += ft_putnbr(num / 10);
		num = num % 10;
	}
	if (num < 10)
	{
		i += ft_putchar(num + 48);
	}
	return (i);
}
