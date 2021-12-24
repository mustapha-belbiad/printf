# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbelbiad <mbelbiad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/07 20:06:24 by mbelbiad          #+#    #+#              #
#    Updated: 2021/12/15 15:53:51 by mbelbiad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc 
SRC = ft_printf.c ft_putstr.c ft_convert.c ft_putchar.c ft_putnbr.c \
		ft_strlen.c ft_unsdc.c ft_uperconv.c

OBJS = ${SRC:.c=.o}
CFLAGS = -Wall -Wextra -Werror 

all : $(NAME)

$(NAME) : $(OBJS)
	@ar -rc $(NAME) $(OBJS)

$(OBJS) :
	@$(CC) -c $(CFLAGS) $(SRC)

clean : 
	@rm -f $(OBJS)

fclean : clean 
	@rm -f $(NAME)

re : fclean all 

.PHONY : all clean fclean re 
