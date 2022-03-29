# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 20:18:27 by drubio-m          #+#    #+#              #
#    Updated: 2022/03/28 22:45:35 by drubio-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c \
	  ft_strlcat.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_isalnum.c \
	  ft_isascii.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strlcpy.c \
	  ft_strncmp.c ft_tolower.c ft_memchr.c ft_memcmp.c 
OBJS = $(SRC:.c=.o)
C = gcc -c
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
RM =  /bin/rm -f

$(NAME): $(OBJS)
	$(C) $(FLAGS) $(SRC)
	ar rcs $(NAME) $(OBJS)
all: $(NAME) 
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all fclean clean re 
