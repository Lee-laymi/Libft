# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skrairab <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/25 02:11:16 by skrairab          #+#    #+#              #
#    Updated: 2022/02/25 02:15:59 by skrairab         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
IS_LIBC = ft_isalnum.c ft_isascii.c ft_isprint.c ft_isdigit.c ft_isalpha.c
TO_LIBC = ft_tolower.c ft_toupper.c ft_atoi.c
STR_LIBC = ft_strcha.c ft_strrchr.c ft_strlen.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_strdup.c
MEM_LIBC =
LIBC = 
PUT_ADDC =
ADDC =
BONUSC =
SRCS = $(LIBC) $(ADDC)
SRCS_BONUS = $(SRCS) $(BONUSC)
OBJS = $(SRCS:.c=.o)


