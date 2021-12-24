/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <mbelbiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:24:45 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/12/15 16:25:05 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_convert(unsigned long i)
{
	char	*hex;
	int		count;

	count = 0;
	hex = "0123456789abcdef";
	if (i >= 16)
		count = ft_convert(i / 16);
	count += ft_putchar(hex[i % 16]);
	return (count);
}
