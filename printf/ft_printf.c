/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <mbelbiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 22:03:25 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/12/15 22:41:14 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_check(va_list olya, char vd)
{
	int	plus;

	plus = 0;
	if (vd == 'c')
		plus += ft_putchar(va_arg(olya, int));
	else if (vd == 's')
		plus += ft_putstr(va_arg(olya, char *));
	else if (vd == 'p')
	{
		plus = ft_putstr("0x");
		plus += ft_convert((unsigned long)va_arg(olya, void *));
	}
	else if (vd == 'x')
		plus += ft_convert(va_arg(olya, unsigned int));
	else if (vd == 'X')
		plus += ft_uperconv((unsigned long)va_arg(olya, void *));
	else if (vd == 'i' || vd == 'd')
		plus += ft_putnbr(va_arg(olya, int));
	else if (vd == 'u')
		plus += ft_unsdc(va_arg(olya, unsigned int));
	else if (vd == '%')
		plus += ft_putchar('%');
	else
		plus += ft_putchar(vd);
	return (plus);
}

int	ft_printf(const char *vd, ...)
{
	int		i;
	int		plus;
	va_list	olya;

	va_start (olya, vd);
	i = 0;
	plus = 0;
	while (vd[i])
	{
		if (vd[i] == '%')
		{
			i++;
			plus += ft_check(olya, vd[i]);
			if (vd[i] == '\0')
				break ;
		}
		else
			plus += ft_putchar(vd[i]);
		i++;
	}
	va_end (olya);
	return (plus);
}
#include <stdio.h>
int main ()
{
	ft_printf("%");
	//printf("%");
}