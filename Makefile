# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelphias <aelphias@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/20 15:59:50 by io                #+#    #+#              #
#    Updated: 2020/04/14 21:34:36 by aelphias         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = list

SRC =	ft_create_elem.c ft_list_last.c ft_list_clear.c  ft_list_push_front.c \
		ft_list_foreach.c  main.c ft_list_push_back.c  ft_list_size.c  \
		ft_list_push_params.c  ft_list_at.c     ft_list_reverse.c 

HEAD = ft_list.h 

all:
	gcc -o $(NAME) $(HEAD)   $(SRC)

clean:
	rm list
