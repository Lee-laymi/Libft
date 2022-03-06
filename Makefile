# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skrairab <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 14:47:33 by skrairab          #+#    #+#              #
#    Updated: 2022/03/06 11:52:22 by skrairab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c \
       ft_isdigit.c \
       ft_isalnum.c \
       ft_isprint.c \
       ft_isascii.c \
       ft_tolower.c \
       ft_toupper.c \
       ft_putchar_fd.c \
       ft_strlcpy.c \
       ft_strlen.c \
       ft_atoi.c \

       
NAME = libft.a

OBJS = $(SRCS:.c=.o)

CC = gcc

CC_FLAGS = -c -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean: 
	-rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re



all:
	echo Hello World:
