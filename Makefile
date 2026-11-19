# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoirand <tmoirand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 12:58:16 by tmoirand          #+#    #+#              #
#    Updated: 2023/11/28 11:02:58 by tmoirand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = use.c	\
	regle.c	\
	regle2.c	\
	index.c	\
	push_swap.c	\
	rule.c	\
	sort.c	\
	sort2.c	\
	sort3.c	\
	swap.c	\
	use2.c	\
	ft_calloc.c \
	ft_split.c

OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
