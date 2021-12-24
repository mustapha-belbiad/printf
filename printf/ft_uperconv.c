/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uperconv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <mbelbiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:40:31 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/12/15 15:24:52 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_uperconv(unsigned int num)
{
	char	*ko;
	int		i;

	ko = "0123456789ABCDEF";
	i = 0;
	if (num >= 16)
		i = ft_uperconv(num / 16);
	i += ft_putchar(ko[num % 16]);
	return (i);
}
