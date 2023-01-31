# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csitja-b <csitja-b@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/16 17:49:18 by csitja-b          #+#    #+#              #
#    Updated: 2023/01/31 17:12:59 by csitja-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# =============================== NAMES ====================================== #

NAME = libft.a
BONUS = .bonus
HEADER = libft.h
INCLUDE = -I ./

# ============================= COMPILATE ==================================== #

RM						= rm -rf
AR         				= ar -rcs
CFLAGS					= -Wall -Werror -Wextra

# =========================== DIRECTORIES ==================================== #

OBJ_DIR				= obj_dir
OBJ_SRC 			= $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
OBJ_BONUS 			= $(addprefix $(OBJ_DIR)/, $(SRC_BONUS:.c=.o))

# =========================== SOURCES ======================================== #

SRC = ft_isalpha.c ft_isprint.c ft_memset.c ft_bzero.c ft_isascii.c ft_memcpy.c \
	  ft_strlen.c ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_memchr.c ft_memcmp.c \
	  ft_strncmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c \
	  ft_itoa.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
	  ft_printf.c functions_1.c functions_2.c functions_3.c\
	  get_next_line.c get_next_line_utils.c

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 

# =========================== BOLD COLORS ==================================== #

DEF_COLOR 				= \033[1;39m
GRAY 	   				= \033[1;90m
RED		   				= \033[1;91m
GREEN	    			= \033[1;32m
YELLOW	    			= \033[1;93m
BLUE 					= \033[1;94m
MAGENTA     			= \033[1;95m
CYAN        			= \033[1;96m
WHITE		       		= \033[1;97m
	
# =========================== BACKGROUND COLORS ============================ #

BG_Black				=\033[40m

# ========================== MAKE RULES ===================================== #

all: $(NAME)
	@echo "\n\n$(BG_Purple)$(GREEN)==== Project libft compiled! ==== ✅$(DEF_COLOR)$(BG_Black)\n"
	@touch $(NAME)
$(NAME):$(OBJ_SRC)
	@$(AR) $(NAME) $(OBJ_SRC)

bonus: $(NAME) $(OBJ_BONUS)
	@echo "\n$(BG_Purple)$(GREEN)==== libft_bonus compiled! ==== ✅$(DEF_COLOR)$(BG_Black)\n"
	@$(AR) $(NAME) $(OBJ_SRC) $(OBJ_BONUS)
	@touch $(BONUS)

$(OBJ_DIR)/%.o: %.c $(HEADER)
	@mkdir -p $(dir $@)
	@printf "$(YELLOW)\r $@$(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

# ========================== CLEAN   ===================================== #

.PHONY: all clean fclean re bonus

clean: 
	@$(RM) $(OBJ_SRC) $(OBJ_BONUS) $(OBJ_DIR)
	@echo "\n$(CYAN)==== Libft object files cleaned! ==== ✅$(DEF_COLOR)\n"
	
fclean: clean 
	@$(RM) $(NAME) $(BONUS)
	@echo "\n$(CYAN)==== Libft executable files and name cleaned! ==== ✅$(DEF_COLOR)\n"

re : fclean all
	@echo "\n$(GREEN)==== Cleaned and rebuilt everything for Libft! ==== ✅$(DEF_COLOR)\n"
