# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/18 17:44:17 by lpan              #+#    #+#              #
#    Updated: 2018/07/18 22:26:34 by lpan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra -I ./includes/

SRC = ft_functions.c \
		ft_operation.c \
 		do_op.c
HEADER = ft_header.h
NAME = do-op

.PHONY: all clean

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) -I $(HEADER)

clean:
	rm -f $(NAME)
