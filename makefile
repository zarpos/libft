# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drubio-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 20:18:27 by drubio-m          #+#    #+#              #
#    Updated: 2022/03/25 22:36:26 by drubio-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memcpy.c ft_memset.c ft_strlcat.c ft_strlen.c ft_strrchr.c ft_toupper.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_tolower.c 
OBJS = $(NAME:%.c=%.o)
C = gcc -c
FLAGS = -Wall -Wextra -Werror
NAME = libft.a
RM =  rm -rf

all: $(NAME) 
$(NAME): $(OBJS)
	$(C) 
	ar rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean 
	$(RM) $(NAME)
re:
	fclean $(NAME)
