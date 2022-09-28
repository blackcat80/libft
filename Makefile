# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 17:49:18 by csitja-b          #+#    #+#              #
#    Updated: 2022/09/28 16:29:58 by csitja-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM = rm -f

NAME = libft.a

HEADER = libft.h

CFLAGS = -Wall -Wextra -Werror  

SRC = ft_isalpha.c ft_isprint.c ft_memset.c ft_bzero.c ft_isascii.c ft_memcpy.c \
	  ft_strlen.c ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c \
	  ft_strncmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c \
	  ft_itoa.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c 

OBJ = $(SRC:.c=.o)

INCLUDE = -I ./

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)

clean: 
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re 
