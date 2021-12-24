/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelbiad <mbelbiad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 20:02:16 by mbelbiad          #+#    #+#             */
/*   Updated: 2021/12/15 21:59:20 by mbelbiad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h> 
# include <string.h>

int	ft_printf(const char *vd, ...);
int	ft_putstr(char *s);
int	ft_putchar(char c);
int	ft_convert(unsigned long n);
int	ft_putnbr(int num);
int	ft_strlen(char *see);
int	ft_unsdc(unsigned int num);
int	ft_uperconv(unsigned int num);
int	ft_check(va_list olya, char vrr);

#endif
