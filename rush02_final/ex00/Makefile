# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/22 22:14:23 by lpan              #+#    #+#              #
#    Updated: 2018/07/22 22:14:27 by lpan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
INC = -Iincludes
TARGET = rush-2
OBJECTS = $(SOURCES:.c=.o)
SOURCES = ./src/base_functions.c \
			src/display_name.c \
			src/ft_create_rush.c \
			src/main.c \
			src/rush_check_cmp.c \
			src/rush00.c \
			src/rush01.c \
			src/rush02.c \
			src/rush03.c \
			src/rush04.c \


all: $(TARGET)

$(TARGET):
	gcc $(CFLAGS) $(INC) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
