# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 17:49:18 by csitja-b          #+#    #+#              #
#    Updated: 2022/09/16 21:57:35 by csitja-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM = rm -f

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror  

SRC = ft_isalpha.c ft_isprint.c ft_memset.c ft_bzero.c ft_isascii.c ft_memcpy.c \
	  ft_strlen.c ft_isalnum.c ft_isdigit.c ft_memmove.c 

OBJ = $(SRC:.c=.o)

INCLUDE = ./

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $

all : $(NAME)

$(NAME):
	ar -rcs $(NAME) $(OBJ)

.PHONY : clean
clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all
