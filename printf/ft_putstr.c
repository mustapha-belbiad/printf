/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <mbelbiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 22:03:56 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/12/15 14:51:14 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s)
{
	int	ko;

	if (!s)
		return (ft_putstr("(null)"));
	ko = ft_strlen(s);
	write(1, s, ko);
	return (ko);
}
